#!/usr/bin/env python
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

# ABOUT
#   This script is used to generate the trace implementations of all
#   OpenGL calls. When executed, it reads the specs for the OpenGL calls
#   from the files GLES2/gl2_api.in, GLES2/gl2ext_api.in, GLES_CM/gl_api.in,
#   and GLES_CM/glext_api.in, and generates trace versions for all the 
#   defined functions.
#
# PREREQUISITES
#   To generate C++ files, this script uses the 'pyratemp' template
#   module. The only reason to use pyratemp is that it is extremly
#   simple to install:
#   $ wget https://www.simple-is-better.org/template/pyratemp-latest/pyratemp.py
#   Put the file in the GLES_trace/tools folder, or update PYTHONPATH
#   to point to wherever it was downloaded.
#
# USAGE
#   $ cd GLES_trace       - run the program from GLES2_trace folder
#   $ ./tools/genapi.py   - generates a .cpp and .h file
#   $ mv *.cpp *.h src/   - move the generated files into the src folder
import sys

sys.dont_write_bytecode = True

import genheaders as gh
import os
try:
    from lxml import etree
except ImportError:
    try:
        # Python 2.5
        import xml.etree.cElementTree as etree
    except ImportError:
        try:
            # Python 2.5
            import xml.etree.ElementTree as etree
        except ImportError:
            try:
                # normal cElementTree install
                import cElementTree as etree
            except ImportError:
                try:
                    # normal ElementTree install
                    import elementtree.ElementTree as etree
                except ImportError:
                    print("Failed to import ElementTree from any known place")

if __name__ == '__main__':
    i = 1
    while (i < len(sys.argv)):
        arg = sys.argv[i]
        i = i + 1
        if (arg == '-h' ):
            gh.usage()
            exit(1)
        elif (arg == '-apiname'):
            gh.apiname = sys.argv[i]
            i = i+1
            gh.write('Using API ', gh.apiname, file=sys.stderr)
        elif (arg == '-debug'):
            gh.write('Enabling debug (-debug)', file=sys.stderr)
            debug = True
        elif (arg == '-dump'):
            gh.write('Enabling dump (-dump)', file=sys.stderr)
            dump = True
        elif (arg == '-noprotect'):
            gh.write('Disabling inclusion protection in output headers', file=sys.stderr)
            protect = False
        elif (arg == '-profile'):
            gh.write('Enabling profiling (-profile)', file=sys.stderr)
            profile = True
        elif (arg == '-registry'):
            regFilename = sys.argv[i]
            i = i+1
            gh.write('Using registry ', regFilename, file=sys.stderr)
        elif (arg == '-gen'):
            gname = sys.argv[i]
            sys.path += [os.path.dirname(sys.argv[0]) + os.path.sep + "api"]
            print [os.path.dirname(sys.argv[0]) + os.path.sep + "api"]
            m = __import__(gname, globals(), locals(), [], -1)
            try:
                attrlist = m.__all__
            except AttributeError:
                attrlist = dir (m)
            for attr in attrlist:
                globals()[attr] = getattr (m, attr)
            gh.write('Using generator ', gname, file=sys.stderr)
            for b in gh.buildList:
                if not b:
                    break
                b.filename = b.filename.replace(".h","-%s.h"% gname)

            i = i+1
        elif (arg == '-time'):
            gh.write('Enabling timing (-time)', file=sys.stderr)
            timeit = True
        elif (arg == '-validate'):
            gh.write('Enabling group validation (-gh.validate)', file=sys.stderr)
            gh.validate = True
        elif (arg[0:1] == '-'):
            gh.write('Unrecognized argument:', arg, file=sys.stderr)
            exit(1)
        else:
            target = arg
            gh.write('Using target', target, file=sys.stderr)

    # Load & parse registry
    gh.reg = gh.Registry()

    gh.startTimer()
    tree = etree.parse(regFilename)
    gh.endTimer('Time to make ElementTree =')

    gh.startTimer()
    gh.reg.loadElementTree(tree)
    gh.endTimer('Time to parse ElementTree =')

    if (gh.validate):
        gh.reg.validateGroups()

    if (gh.dump):
        gh.write('***************************************')
        gh.write('Performing Registry dump to regdump.txt')
        gh.write('***************************************')
        gh.reg.dumpReg(filehandle = open('regdump.txt','w'))

    # create error/warning & diagnostic files
    if (gh.errFilename):
        gh.errWarn = open(gh.errFilename,'w')
    else:
        gh.errWarn = sys.stderr
    gen = COutputGenerator(errFile=gh.errWarn,
            warnFile=gh.errWarn,
            diagFile=None)

    if (gh.debug):
        pdb.run('genHeaders()')
    elif (gh.profile):
        import cProfile, pstats
        cProfile.run('genHeaders()', 'profile.txt')
        p = pstats.Stats('profile.txt')
        p.strip_dirs().sort_stats('time').print_stats(50)
    else:
        gh.genHeaders(gen)
