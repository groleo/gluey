#!/usr/bin/env python
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

from lxml import etree
import os


class PerfMon:
    def __init__(self):
        return None
    def loadElementTree(self, tree):
        return 0
    def genStruct(self, gen):
        a = gen.findall("taxon")
        for i in a:
            print "\nstruct %s {" % (i.attrib["name"])
            qs = i.findall("entity")
            for q in qs:
                print "\t%s %s;" % (q.attrib["datatype"], q.attrib["name"])
            print "};"

        return 0

    def genTags(self, gen):
        tags = set()
        b = gen.findall("taxa/taxon")
        for x in b:
            tags.add(x.text)
        print "enum tag_type {"
        for tag in tags:
            print "\tTAG_%s," % tag.upper()
        print "\tMAX_TAG_TYPE"
        print "};"
    def genTagsBipos(self, gen):
        tags = set()
        b = gen.findall("taxa/taxon")
        for x in b:
            tags.add(x.text)

        print "\nenum tag_type_bitpos {"
        for tag in tags:
            print "\tBITPOS_TAG_%s = 1 << TAG_%s," % (tag.upper(), tag.upper())
        print "\tMAX_BITPOS_TAG_TYPE"
        print "};"

    def genTagNames(self, gen):
        tags = set()
        b = gen.findall("taxa/taxon")
        for x in b:
            tags.add(x.text)
        print "\nconst char* tag_names[] {"
        for tag in tags:
            print "\t\"%s\"," % tag
        print "\tnullptr"
        print "};"


    def genDescription(self, gen):
        a = gen.findall("taxon")

        for i in a:
            print "\nstruct counter_description %s_counter_description[] = {" % (i.attrib["name"])
            qs = i.findall("entity")
            for q in qs:
                print "\t{ \"%s\", \"%s\"}," % (q.attrib["brief"], q.attrib["description"])
            print "};"
        return 0

    def genBitpos(self, gen):
        a = gen.findall("taxon")

        print "\nenum counter_bitpos {"
        for i in a:
            print "\tBITPOS_%s," % (i.attrib["name"].upper())
        print "\tMAX_COUNTER_BITPOS"
        print "};"
        return 0

    def genMetricInit(self, gen):
        a = gen.findall("taxon")

        print "\nvoid metrics_init() {"
        for i in a:
            tags = i.findall("tag")
            for t in tags:
                print "\tcounter_collection[TAG_%s].members" % (t.attrib["name"].upper())
                print "\t\t.set(BITPOS_%s);\n" % (i.attrib["name"].upper())
        print "}"
        return 0

    def genDescriptionTable(self, gen):
        a = gen.findall("taxon")

        print "\nstruct counter_table counter_metrics[] = {"
        for i in a:
            qs = i.findall("entity")
            print "\t{ %d, %s_counter_description}," % (len(qs),i.attrib["name"])
        print "\t{ 0, nullptr}"
        print "};"
        return 0
    def genCollection(self, gen):
        print "struct collection {"
        print "\tstd::bitset<MAX_COUNTER_BITPOS> members;"
        print "} counter_collection[MAX_TAG_TYPE];"

if __name__ == '__main__':
    # Load & parse perfmon
    gh = PerfMon()

    tree = etree.parse("perf_event_open.xml")

    gh.loadElementTree(tree)

    gh.genTags(tree)
    gh.genTagsBipos(tree)
    gh.genTagNames(tree)
    gh.genBitpos(tree)
    gh.genStruct(tree)
    gh.genDescription(tree)
    gh.genDescriptionTable(tree)
