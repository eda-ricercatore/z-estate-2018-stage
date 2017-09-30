#	Makefile for build automation.

#	This is written by Zhiyang Ong for build automation of his
#		implementation of a fixed-size hash map and to run automated
#		regression tests automatically.

#	================================================================

#	The MIT License (MIT)

#	Copyright (c) <2017> <Zhiyang Ong>

#	Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

#	The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

#	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#	Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"	Che cosa significa?

#	================================================================

# IMPORTANT NOTE:
# Makefile is written for Mac OS X 10.12.6, running on a Intel Core i7 processor.
# Use "clang" for C++ compilation, instead of g++/GCC. 
# Apple LLVM version 9.0.0 (clang-900.0.37).

# Definition of macro flags...
GPLUSPLUS=			g++
COMPILE=			-c
LINK=				-o
EXECUTABLE=			./test-fixed-size-hash-map
OBJFILES=			*.o
SOURCE=				*.cpp
HEADER=				*.h
TILDE=				*~
PREVDIR=			../
HOME=				../
SLASH=				/
# Macros that are useful to help me debug
COMPILATIONSTEPS=	-v
WARNINGS=			-Wall
EFFCPP=				-Weffc++
HARDERRORS=			-Werror
PEDANTIC=			-pedantic
PEDANTICERRORS=		-pedantic-errors
EXTRAWARNINGS=		-Wextra
COMPATIBILITY=		-Wc++-compat
DEBUGGINGINFO=		-g -dA
DEBUGDUMP=			-dD
COREDUMP=			-dH
MEMORYUSAGE=		-dm
MEMORYTIME=			-fdump-tree-all
CPPTIME=			-time
SIMPLEOPT=			-O1
MOREOPT=			-O2
EVENMOREOPT=		-O3
MAXPERFORMANCE=		-fast
SIZEOPT=			-Os
INCLUDE=			-I
DYNDIRINC=			-L
DYNINCLUDE=			-l
#	Used when testing and debugging.
COVERAGE=			-coverage
#	Normal output message/text file
NORMALTXT=			normal_output.txt
#	Error output message/text file
ERRORTXT=			error_output.txt
#	Used when testing and debugging.
COVERAGE=			-coverage
CPP11=				-std=c++11
CPP14=				-std=c++14
CPP17=				-std=c++17



# Basic software architecture description at the module level.
# Paths for different modules/packages of the software.
#
# Note that the paths of the modules are relative.
# The modules are located in the "src" directory.
# This is because I am building and testing the software in a
#	separate directory, so that I can isolate the object files
#	and theexecutable from the source code.
# Such isolation would make it easier to clean up the directory where
#	the software resides, so that it is easier to maintain.
#
# Module that defines the key components of a hash map.
HASHMAPPATH=		../src/hash_map/
# Module containing the definition and implementation of a simple
#	object .
ELEMPATH=		../src/elements/
# Module containing test cases/suites for the software.
# It does not contain Exception classes, which are placed
#	in the utilities module.
TESTPATH=		../src/test/
# Submodules of the Test module
TPHASHMAP=		hash_map_t/
TPUTILITIES=	utilities_t/
TPELEM=			elements_t/
#
# Module that provides classes to support the development and
#	debugging of the software, including Exception classes.
UTILITYPATH=	../src/utilities/
#
# Module containing scripts used for file processing/management
#	and statistical analysis
SCRIPTS=		../scripts/
#
# Module containing the binaries, object files, and build automation
#	tools.
BINARIES=		../binaries/
#
# Module containing the documention of the software.
NOTESPATH=		../notes/
DOCSPATH=		../docs/
# Module containing "test" code from the "sandbox".
SANDBOXPATH=	../src/sandbox/



# UNIX commands/utilities that are used
TIME=			time -p
DATE=			date






# =============================================================

#	Make targets

########################################################################
# TEST THE SOFTWARE: UNIT, MODULE, INTEGRATION, AND REGRESSION TESTING
########################################################################
# Build and test the latest software build. 
test:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	$(TBBSETUP)
	@echo === Compiling C++ source code in the...
	@echo === Utilities Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(UTILITYPATH)$(SOURCE)
	@echo === Hash Map Directory
	@echo === Test/Utilities Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(TESTPATH)$(TPUTILITIES)$(SOURCE)
	@echo === Test Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(TESTPATH)$(SOURCE)
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(CPP11)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(TIME) $(EXECUTABLE) $(BENCHMARKS)$(STACK1)	$(OPRESULTS)
	@echo
	@echo
	@echo
	@echo
	@echo "The code is rather buggy; use is at own risk."
	@echo "-- Donald Chai"
	@echo
	@echo "Beware of bugs in the above code."
	@echo "I have only proved it correct, not tried it."
	@echo "-- Donald E. Knuth"
	@echo
	@echo
	@echo
	@echo
	#more $(NORMALTXT)
	#more $(ERRORTXT)


















