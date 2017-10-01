/**
 * @author Zhiyang Ong
 *
 * Test suite for the hash map.
 *
 * Main function for test suite:
 * This test suite will set up the instance variables necessary to
 * 	test different functions of the hash map.
 * Subsequently, it will test the various modules, and classes and
 *	their functions.
 * Next, it will clear up the virtual memory used by the instance
 *	variables.
 *
 * For each class, the testing sequence would be:
 * # constructors
 * # accessor functions
 * # mutator functions
 * # destructor
 *
 * The current testing sequence of classes is:
 * # utilities
 *		@ violated_assertion
 *		@ violated_postcondition
 *		@ violated_precondition
 *		@ printer
 * ...
 * # node
 *
 *
 * #### IMPORTANT NOTES:
 * To be completed...
 *
 *
 *
 *
 *
 *
 *
 * The MIT License (MIT)
 *
 * Copyright	(C)	<2017>	<Zhiyang Ong>
 *
 * Permission is hereby granted, free of charge, to any person
 *	obtaining a copy of this software and associated documentation
 *	files (the "Software"), to deal in the Software without
 *	restriction, including without limitation the rights to use, copy,
 *	modify, merge, publish, distribute, sublicense, and/or sell copies
 *	of the Software, and to permit persons to whom the Software is
 *	furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 *	included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *	EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *	MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *	NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 *	HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 *	WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 *	DEALINGS IN THE SOFTWARE.
 * 
 * 
 * Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"	Che cosa significa?
 */

// Import Header files from the C++ STL
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>
#include <math.h>
#include <climits>
#include <cfloat>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

// Import Header files from the other modules of lamiera-per-caldaie.
// Utilities module
#include "utilities_t/utilities_mt.hpp"
#include "elements_t/elements_mt.hpp"
//#include "../../elements_t/elements_mt.hpp"
//#include "../elements_t/elements_mt.hpp"
/*
#include "../utilities/printer.hpp"
#include "utilities_t/printer_ut.hpp"
//#include "../utilities/file_io.h"
//#include "utilities_t/file_io_ut.h"
#include "../utilities/violated_assertion.hpp"
#include "utilities_t/violated_assertion_ut.hpp"
#include "../utilities/violated_precondition.hpp"
#include "utilities_t/violated_precondition_ut.hpp"
#include "../utilities/violated_postcondition.hpp"
#include "utilities_t/violated_postcondition_ut.hpp"
#include "utilities_t/utilities_mt.hpp"
*/
// Graph module
//#include "graph_t/graph_mt.hpp"

// Import "test" classes from the "sandbox". Test works when its code are not used.
//#include "../sandbox/classes/simple_template.hpp"



using namespace std;

// =======================================================================

// FIX THESE!!!
// Shortcuts to use data structures and iterators from the STL
// Shortcut to represent list of blk_pins
//typedef list<blk_pin *> blk_pin_list;
// Shortcut to represent a pointer to list of blk_pins
//typedef list<blk_pin *>::iterator blk_pin_l_p;

// =======================================================================

// Start of main function...
int main(int argc, char *argv[]) {
	printer::set_debugging_mode(true);
	printer::debug_std_op_ln("===============================================================");
	printer::debug_std_op_ln("		- START OF TEST SUITE -");
	printer::debug_std_op_ln("===============================================================");
	printer::debug_std_op_ln("Run the automated regression test suite...");
	printer::debug_std_op_ln("");
	// Switch off debugging mode for testing the Utilities module.
	printer::set_debugging_mode(false);
	
		
	// =======================================================================
	// =======================================================================
	// =======================================================================
	
	

// seg fault - accessing something that isn't there
// bus error - accessing some thing (data element) that has been freed


	
	// Start testing my code here!
	
	// Testing the utilities package
	utilities_mt::test_utilities();
	// Switch on debugging mode to test other modules.
	printer::set_debugging_mode(true);
	printer::debug_std_op_ln("");
	printer::debug_std_op_ln("");
	
	
	// Testing the elements package
	elements_mt::test_my_element_mt();
	printer::debug_std_op_ln("");
	printer::debug_std_op_ln("");
	


	
	// Tally up the software testing score.
	printer::debug_std_op_ln("--------------------------------------------------------");
	printer::debug_std_op_ln("		Summary of Automated Regression Testing");
	printer::debug_std_op_ln("");
	printer::debug_std_op_ln("");
	printer::debug_std_op("Number of test cases: 		");
	printer::debug_std_op_ln(to_string(printer::get_num_test_cases()));
	printer::debug_std_op("Number of passed test cases:	");
	printer::debug_std_op_ln(to_string(printer::get_num_passed_test_cases()));
	double results = (double) printer::get_num_passed_test_cases() / printer::get_num_test_cases();
	results = results * 100;
	printer::debug_std_op("	Success Rate: ");
	//printer::debug_std_op_ln(to_string(results));
	printer::debug_std_op(to_string(results));
	printer::debug_std_op_ln("%");
	printer::debug_std_op_ln("");
	printer::debug_std_op_ln("");
	

	printer::debug_std_op_ln("===============================================================");
	printer::debug_std_op_ln("		- END OF TEST SUITE -");
	printer::debug_std_op_ln("===============================================================");
	
	
	printer::debug_std_op_ln("");
	printer::debug_std_op_ln("");
	printer::debug_std_op_ln("");
	
	// End of main function...
	return 0;
}
