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

#include <libgen.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static char* getexecname()
{
    static char execname[PATH_MAX + 1];
    ssize_t rv = readlink("/proc/self/exe", execname, PATH_MAX);
    if (rv == -1)
    {
        return NULL;
    }
    return execname;
}

static void usage() { fprintf(stdout, "Usage: gluey EXECUTABLE\n"); }

int main(int argc, char* argv[])
{

    printf("Executing\n");

    if (argc == 1)
    {
        usage();
        exit(EXIT_FAILURE);
    }

    char* const* _a = &argv[1];
    // TODO: proper alloc size check
    char b[2048];
    char* en = getexecname();
    if (!en)
        exit(EXIT_FAILURE);
    sprintf(b, "%s/../lib/libHook.so", dirname(en));
    setenv("LD_PRELOAD", b, 1);
    return execvp(_a[0], _a);
}
