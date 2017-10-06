/**
 * Test/Elements_t package:
 * Submodule of Test package to test classes in the Elements package.
 *
 * my_element_ut class:
 * Class that tests the my_element class in the elements package.
 * The constructors and functions of the my_element class shall be
 *	tested.
 * 
 *
 *
 * @author Zhiyang Ong
 * @version 1.0.0
 * @since September 30, 2017
 *
 
 * The MIT License (MIT)
 *
 * Copyright	(C)	<2015>	<Zhiyang Ong>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"		Don't compromise my computing accounts. You have been warned.
 */

// Import Header files from the other modules of the software.
// Elements module
//#include "../../../elements/my_element.hpp"
#include "../../elements/my_element.hpp"
// Utilities module
#include "../../utilities/printer.hpp"
#include "../../utilities/violated_assertion.hpp"
#include "../../utilities/violated_precondition.hpp"
#include "../../utilities/violated_postcondition.hpp"

// Import appropriate header files from the C++ STL



#ifndef __MY_ELEMENT_UT_H
#define __MY_ELEMENT_UT_H


// ==================================================================

class my_element_ut {
//	private:
//		string err_msg;

	// --------------------------------------------------------------

	public:
		// Default constructor.
		my_element_ut();
				
		// ----------------------------------------------------------

		/**
		 * Function to test the constructors and functions of
		 *	my_element.
		 */
		static void test_my_element_ut();

		/**
		 * Function to test the standard constructor and accessor
		 *	functions of the class my_element.
		 */
		static void test_my_element_constructor_and_accessor_functions();

		/**
		 * Function to test the mutator functions regarding the
		 *	name and index number of a my_element object.
		 */
		static void test_my_element_mutator_functions();
		
		/**
		 * Function to test the hash functions regarding the name and
		 *	objects (i.e., instances varaibles) of my_element.  
		 */
		static void test_my_element_hash_functions();
		
		/**
		 * Function to test the comparison function.  
		 */
		static void test_my_element_comparison_function();
};
#endif

