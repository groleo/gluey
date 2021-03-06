#!/usr/bin/python3 -i
#
# Copyright (c) 2013-2017 The Khronos Group Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import io,os,re,string,sys
import reg as Reg
import pyratemp


# APICALL return-type APIENTRY Function (arguments);
# - APICALL is used for the public API symbols.
# - APIENTRY for windows is __stdcall
SHIM_CALL_TEMPLATE = pyratemp.Template(
"""
$!genOpts.apicall!$ $!retType!$ $!genOpts.apientry!$ $!fName!$ ($!params!$)
{
<!--(if retType != "void")-->
    auto retVal =
<!--(end)-->
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,$!fName!$
<!--(if len(args) > 0)-->
                    ,$!args!$
<!--(end)-->
                    );
<!--(if retType != "void")-->
    return retVal;
<!--(end)-->
}
"""
)


# CDefOutputGenerator - subclass of Reg.OutputGenerator.
# Generates C-language API interfaces.
class COutputGenerator(Reg.OutputGenerator):
    """Generate specified API interfaces in a specific style, such as a C header"""
    def __init__(self,
                 errFile = sys.stderr,
                 warnFile = sys.stderr,
                 diagFile = sys.stdout):
        Reg.OutputGenerator.__init__(self, errFile, warnFile, diagFile)
        # Internal state - accumulators for different inner block text
        self.typeBody = ''
        self.enumBody = ''
        self.cmdBody = ''
    #
    # makeCDecls - return C prototype and function pointer typedef for a
    #   command, as a two-element list of strings.
    # cmd - Element containing a <command> tag
    def makeCDecls(self, cmd):
        """Generate C function hook for <command> Element"""
        protoElms   = cmd.find('proto')
        paramElms   = cmd.findall('param')
        retType = []
        fName   = None
        it      = None

        # Begin accumulating prototype
        # Insert the function return type/name.
        # Done by walking the tree for <proto> element by element.
        # lxml.etree has elem.text followed by (elem[i], elem[i].tail)
        #   for each child element and any following text
        it = Reg.noneStr(protoElms.text).strip()
        if it != "":
            retType.append(it)

        # For each child element, if it's a <name> wrap in appropriate
        # declaration. Otherwise append its contents and tail contents.
        for elem in protoElms:
            text = Reg.noneStr(elem.text).strip()
            tail = Reg.noneStr(elem.tail).strip()
            if elem.tag == "name":
                fName = text # + tail
            else:
                retType.append(text + tail)

        # Now add the parameter declaration list, which is identical
        # for prototypes and typedefs. Concatenate all the text from
        # a <param> node without the tags. No tree walking required
        # since all tags are ignored.
        params = []
        args = []
        for elem in paramElms:
            text = Reg.noneStr(elem.text).strip()
            tail = Reg.noneStr(elem.tail).strip()
            nameElms = elem.find("name")
            text = Reg.noneStr(nameElms.text).strip()
            args.append(text + tail)
            params.append( ''.join([t for t in elem.itertext()]) )

        body = SHIM_CALL_TEMPLATE(fName = fName,
                                  retType = ' '.join(retType),
                                  params = ','.join(params),
                                  args = ','.join(args),
                                  genOpts = self.genOpts,
                                 )
        return [ '', body+'\n' ]
    #
    def newline(self):
        Reg.write('', file=self.outFile)
    #
    def beginFile(self, genOpts):
        Reg.OutputGenerator.beginFile(self, genOpts)
        # Some boilerplate describing what was generated - this
        # will probably be removed later since the extensions
        # pattern may be very long.
        Reg.write('/* API:', genOpts.apiname, file=self.outFile)
        if (genOpts.profile):
            Reg.write(' * Profile:', genOpts.profile, file=self.outFile)
        Reg.write(' * Versions considered:', genOpts.versions, file=self.outFile)
        Reg.write(' * Versions emitted:', genOpts.emitversions, file=self.outFile)
        Reg.write(' * Default extensions included:', genOpts.defaultExtensions, file=self.outFile)
        Reg.write(' * Additional extensions included:', genOpts.addExtensions, file=self.outFile)
        Reg.write(' * Extensions removed:', genOpts.removeExtensions, file=self.outFile)
        Reg.write(' */', file=self.outFile)
    def beginFeature(self, interface, emit):
        # Start processing in superclass
        Reg.OutputGenerator.beginFeature(self, interface, emit)
        # C-specific
        # Accumulate types, enums, function pointer typedefs, end function
        # prototypes separately for this feature. They're only printed in
        # endFeature().
        self.typeBody = ''
        self.enumBody = ''
        self.cmdPointerBody = ''
        self.cmdBody = ''
    def endFeature(self):
        # C-specific
        # Actually Reg.write the interface to the output file.
        if (self.emit):
            if (self.typeBody != ''):
                Reg.write(self.typeBody, end='', file=self.outFile)
            if (self.enumBody != ''):
                Reg.write(self.enumBody, end='', file=self.outFile)
            if (self.genOpts.genFuncPointers and self.cmdPointerBody != ''):
                Reg.write(self.cmdPointerBody, end='', file=self.outFile)
            if (self.cmdBody != ''):
                prefix = ''
                suffix = ''
                Reg.write(prefix + self.cmdBody + suffix, end='', file=self.outFile)
        # Finish processing in superclass
        Reg.OutputGenerator.endFeature(self)
    #
    # Command generation
    def genCmd(self, cmdinfo, name):
        Reg.OutputGenerator.genCmd(self, cmdinfo, name)
        #
        decls = self.makeCDecls(cmdinfo.elem)
        self.cmdBody += decls[0]
        self.cmdBody += decls[1]

