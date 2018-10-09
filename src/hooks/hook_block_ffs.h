// Copyright (c) 2018, Adrian Negreanu
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this
//    list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
// ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#pragma once

#include <stdint.h>
#include <assert.h>
#include <limits.h>

#if defined(NDEBUG)
    #define assert_comma(e)
#else
    #define assert_comma(e) assert(e),
#endif

inline uint32_t bitPos(uint32_t p)
{
    return p;
}

/////////////////////////////////////////////////////
// Stream Processing Units
enum SPUType : uint32_t
{
    SPU_TYPE_SHIM = 0,
    SPU_TYPE_DUMP,
    SPU_TYPE_ORIG_FPTR,
    SPU_TYPE_MAX,
};

/////////////////////////////////////////////////////
enum HookAttributes : uint64_t
{
    HOOK_ATTR_U = 0b00,  /// undefined
    HOOK_ATTR_E = 0b01,  /// enabled
    HOOK_ATTR_A = 0b10,  /// always call
    HOOK_ATTR_D = 0b11,  /// disabled
};

/////////////////////////////////////////////////////
/// SlingChain is an assembly which connects the load
/// to the crane. It has chains connected to a top
/// master oblong link.
/// A hook is fitted on each chain end.
class SafeSling
{
public:
    uint16_t       enabled = 0;
    uint16_t       always_call = 0;
    void*          hooks[SPU_TYPE_MAX] = {nullptr};
public:
    bool IsEnabled(unsigned int hookType) const
    {
        static_assert(SPU_TYPE_MAX <= sizeof(enabled)*CHAR_BIT, "");
        assert(hookType < SPU_TYPE_MAX);
        return enabled & (1<< bitPos(hookType));
    }
    bool IsCallAlways(unsigned int hookType) const
    {
        static_assert(SPU_TYPE_MAX <= sizeof(enabled)*CHAR_BIT, "");
        assert(hookType < SPU_TYPE_MAX);
        return always_call & (1<< bitPos(hookType));
    }
    void InsertHook(unsigned int hookType, unsigned int attr, void* fptr)
    {
        assert(hookType < SPU_TYPE_MAX);
        if (attr == HOOK_ATTR_A)
            always_call |= 1<< bitPos(hookType);
        else if (attr == HOOK_ATTR_E)
            enabled |= 1<< bitPos(hookType);
        hooks[hookType] = fptr;
    }
    void FnSetLast(void *fptr)
    {
        always_call |= 1 << bitPos(SPU_TYPE_ORIG_FPTR);
        hooks[SPU_TYPE_ORIG_FPTR] = fptr;
    }
    void* FnGetFirst() const
    {
        return Hook(SPU_TYPE_SHIM);
    }
    void* FnGetLast() const
    {
        return Hook(SPU_TYPE_ORIG_FPTR);
    }
    void* Hook(unsigned int hookType) const
    {
        assert(hookType < SPU_TYPE_MAX);
        return hooks[hookType];
    }
};

/////////////////////////////////////////////////////
template <class SPUContextT>
class SPUState
{
public:
    inline void SetArg(unsigned int spuType, SPUContextT ctx)
    {
        assert(spuType < SPU_TYPE_MAX);
        spuCtx[spuType] = ctx;
    }
    template <typename Derived>
    inline Derived GetArg(unsigned int spuType) const
    {
        assert(spuType < SPU_TYPE_MAX);
        assert(spuCtx[spuType]);
        return (Derived)(spuCtx[spuType]);
    }
    bool IsEnabled(unsigned int spuType) const
    {
        assert(spuType < SPU_TYPE_MAX);
        return enabled & (1 << bitPos(spuType));
    }
    inline void Enable(unsigned int spuType)
    {
        assert(spuType < SPU_TYPE_MAX);
        enabled |= 1 << bitPos(spuType);
    }
    inline void Disable(unsigned int spuType)
    {
        assert(spuType < SPU_TYPE_MAX);
        enabled &= ~(1 << bitPos(spuType));
    }
    template <typename T>
    void InsertHooks(T hc)
    {
        spuCtx[hc->marker] = static_cast<SPUContextT>(hc);
    }

public:
    SPUContextT     spuCtx[SPU_TYPE_MAX] = {nullptr};
    uint16_t        enabled = 0;
};

/////////////////////////////////////////////////////
/// A hook block is an assembly to which the hook of
/// a crane is attached.
template <class SPUContextT, int SlingTableRows, class SlingChainT=SafeSling>
class HookBlock
{
public:
    SPUState<SPUContextT>    spuState;
    SlingChainT        slings[SlingTableRows];

public:
    template <typename T = SPUContextT>
    inline T GetArg(unsigned int t) const
    {
        return spuState.template GetArg<T>(t);
    }

    template <typename T> inline T GetArg();

    inline SlingChainT& Row(unsigned int f_INDEX)
    {
        assert(f_INDEX < SlingTableRows);
        return slings[f_INDEX];
    }
    void EnableSPU(unsigned int ht)
    {
        spuState.Enable(ht);
    }
    void DisableSPU(unsigned int ht)
    {
        spuState.Disable(ht);
    }

    template<typename T>
    void InsertHooks(T hc)
    {
        assert(hc);
        spuState.InsertHooks(hc);

        unsigned type = hc->marker;
        for (int i = 0; hc->pOrigFuncs && i < SlingTableRows; i++)
        {
            if (hc->pOrigFuncs[i])
            {
                if ( (hc->alwaysOnFn && hc->alwaysOnFn[i])
                || type == SPU_TYPE_ORIG_FPTR)
                    Row(i).InsertHook(type, HOOK_ATTR_A, hc->pOrigFuncs[i]);
                else
                    Row(i).InsertHook(type, HOOK_ATTR_E, hc->pOrigFuncs[i]);
            }
        }
    }
    void* FnGetFirst(unsigned int f_INDEX) const
    {
        assert(f_INDEX < SlingTableRows);
        return slings[f_INDEX].FnGetFirst();
    }
    void* FnGetLast(unsigned int f_INDEX) const
    {
        assert(f_INDEX < SlingTableRows);
        return slings[f_INDEX].FnGetLast();
    }
    void FnSetLast(unsigned int f_INDEX, void* fptr)
    {
        assert(f_INDEX < SlingTableRows);
        return slings[f_INDEX].FnSetLast(fptr);
    }
    inline unsigned int FnGetNext(unsigned int f_INDEX, unsigned int c)
    {
        assert(f_INDEX < SlingTableRows);
        unsigned k = (slings[f_INDEX].always_call | (spuState.enabled & slings[f_INDEX].enabled)) & (0xFFFF <<c);
        unsigned i = __builtin_ffs(k)-1;
        return i;
    }
};

/////////////////////////////////////////////////////

/// Invoke the function-pointer set by the successor of hookType.
///
/// @param ctx        Context.
/// @param hookType   Hook Type.
/// @param funcName   Function identifier.
#define hook_invoke_from(ctx, hookType, funcName, ...)                         \
(                                                                              \
    assert_comma(ctx)                                                          \
    assert_comma(ctx->h)                                                       \
    (                                                                          \
        hook_invoke_at(ctx, ctx->h->FnGetNext(funcName##_INDEX, (hookType)), funcName, ##__VA_ARGS__)                 \
    )                                                                          \
)

/// Invoke the function-pointer set by the successor of hookType.
///
/// @param ctx        Context.
/// @param hookType   Hook Type.
/// @param funcName   Function identifier.
#define hook_invoke_succ(ctx, hookType, funcName, ...)                         \
(                                                                              \
    assert_comma(ctx)                                                          \
    assert_comma(ctx->h)                                                       \
    (                                                                          \
        hook_invoke_at(ctx, ctx->h->FnGetNext(funcName##_INDEX, (hookType)+1), funcName, ##__VA_ARGS__)                 \
    )                                                                          \
)
/// Invoke the function-pointer set by hookType.
///
/// @param ctx        Context.
/// @param hookType   Hook Type.
/// @param funcName   Function identifier.
#define hook_invoke_at(ctx, hookType, funcName, ...)                           \
(                                                                              \
    assert_comma(ctx)                                                          \
    assert_comma(ctx->h)                                                       \
    (                                                                          \
        (hookType) == SPU_TYPE_ORIG_FPTR                                       \
            ? hook_invoke_orig(ctx,funcName,##__VA_ARGS__)                     \
            : ( assert_comma((ctx->h)->Row(funcName##_INDEX).Hook(hookType))   \
                reinterpret_cast<hook_PFN##funcName##PROC>((ctx->h)->Row(funcName##_INDEX).Hook(hookType))((ctx), ##__VA_ARGS__) \
              )                                                                \
    )                                                                          \
)

/// Invoke the original function-pointer.
///
/// @param ctx        Context.
/// @param funcName   Function identifier.
#define hook_invoke_orig(ctx, funcName, ...)                                   \
(                                                                              \
    assert_comma(ctx)                                                          \
    assert_comma(ctx->h)                                                       \
    assert_comma((ctx->h)->FnGetLast(funcName##_INDEX))                        \
    reinterpret_cast<PFN##funcName##PROC>((ctx->h)->FnGetLast(funcName##_INDEX))(__VA_ARGS__)\
)

/// Set the original function-pointer.
///
/// @param ctx        Context.
/// @param f_INDEX    Function index.
/// @param fptr       Function-pointer.
#define hook_set_orig(ctx, f_INDEX, fptr)                                      \
(                                                                              \
    assert_comma(ctx)                                                          \
    assert_comma(ctx->h)                                                       \
    (ctx->h)->Row(f_INDEX).FnSetLast((void*)fptr)                              \
)


/// Get the original function-pointer.
///
/// @param ctx        Context.
/// @param f_INDEX    Function index.
#define hook_get_orig(ctx, f_INDEX)                                            \
(                                                                              \
    assert_comma(ctx)                                                          \
    assert_comma(ctx->h)                                                       \
    (ctx->h)->Row(f_INDEX).FnGetLast()                                         \
)

/// Install a hook.
///
/// @param ctx        Context.
/// @param c          Hook Type.
/// @param f_INDEX    Function index.
/// @param fptr       Function-pointer.
/// @param attr       Function-pointer Attributes.
#define hook_install(ctx, c, attr, f_INDEX, fptr)                              \
(                                                                              \
    assert_comma(ctx)                                                          \
    assert_comma(ctx->h)                                                       \
    (ctx->h)->Row(f_INDEX).InsertHook(c,attr, (void*)fptr)                     \
)

/// Get the first non-null function-pointer of a sling chain.
///
/// @param ctx        Context.
/// @param f_INDEX    Function index.
#define hook_get_first(ctx, f_INDEX)                                           \
(                                                                              \
    assert_comma(ctx)                                                          \
    assert_comma(ctx->h)                                                       \
    (ctx->h)->Row(f_INDEX).FnGetFirst()                                        \
)

#define spu_enable(gp, type)  gp->h->EnableSPU(type)
/////////////////////////////////////////////////////
template<class HookT, int SlingTableRows>
struct ApiContext
{
    HookBlock<HookT, SlingTableRows> *h;
    ///
    ApiContext()
        : h(new HookBlock<HookT, SlingTableRows>)
    {}
    ~ApiContext()
    { delete h; }
    ///
    ApiContext(const ApiContext&) = delete;
};
/////////////////////////////////////////////////////
