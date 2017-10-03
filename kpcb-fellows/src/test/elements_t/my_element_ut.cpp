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


// Import Header files from modules of the software.
#include "my_element_ut.hpp"

// Import appropriate header files from the C++ STL
#include <string>

// ===========================================================

/**
 * Default constructor of the unit test for the class my_element.
 */
my_element_ut::my_element_ut() {
	cerr << "==tu	Don't instantiate the tester for my_element";
	cerr << endl;
	string err_msg = "==tu	Don't use my_element_ut's default constructor";
	throw new violated_assertion(err_msg);
}

// ===========================================================

/**
 * Function to test the constructors and functions of my_element.
 * @param - None.
 * @return - Nothing.
 */
void my_element_ut::test_my_element_ut() {
	cout << "==tu	Testing: my_element..." << endl;
	// Test the constructor.
	test_my_element_constructor_and_accessor_functions();
	// Test mutator functions of the my_element class.
	test_my_element_mutator_functions();
	
	cout << endl;
}


/**
 * Function to test the constructors of the class my_element.
 * @param - None
 * @return - Nothing
 */
void my_element_ut::test_my_element_constructor_and_accessor_functions() {
	// Check if my_element is instantiated correctly.
	my_element *my_elem = new my_element();
	cout << "==tu	>>	Default constructor's index number = UINT_MAX?";
	printer::num_test_cases_eval();
	
	if((UINT_MAX == my_elem->get_index_number()) &&
		(0 == (my_elem->get_name()).compare("Missing Name"))) {
		cout << "	Yes." << endl;
		printer::num_passed_test_cases_eval();
		cout << "==tu	>>	Default constructor's name = 'Missing Name'?";
		cout << "	Yes." << endl;
		printer::num_test_cases_eval();
		printer::num_passed_test_cases_eval();
	}else{
		cout << "	NO!!!" << endl;
	}
	
	int temp_index_number = 12345001;
	string temp_name = "Temporary name";
	my_elem = new my_element(temp_name, temp_index_number);
	cout << "==tu	>>	Standard constructor's index number = 12345001?";
	printer::num_test_cases_eval();
	if((temp_index_number == my_elem->get_index_number()) &&
		(0 == (my_elem->get_name()).compare(temp_name))) {
		cout << "	Yes." << endl;
		printer::num_passed_test_cases_eval();
		cout << "==tu	>>	Standard constructor's name = 'Temporary name'?";
		cout << "	Yes." << endl;
		printer::num_test_cases_eval();
		printer::num_passed_test_cases_eval();
	}else{
		cout << "	NO!!!" << endl;
	}
}



/**
 * Function to test the mutator functions regarding the name and
 *	index number of a my_element object.
 * @param - None
 * @return - Nothing
 */
void my_element_ut::test_my_element_mutator_functions() {
	// Use default constructor to instantiate my_element.
	my_element *my_elem = new my_element();
	// Modify its index number to 23460011.
	int temp_index_number = 23460011;
	my_elem->set_index_number(temp_index_number);
	cout << "==tu	>>	Is modified index number = 23460011?";
	printer::num_test_cases_eval();
	
	if(temp_index_number == my_elem->get_index_number()) {
		cout << "		Yes." << endl;
		printer::num_passed_test_cases_eval();
	}else{
		cout << "			NO!!!" << endl;
	}
	
	// Modify its name to "Ciao Mondo".
	string temp_name = "Ciao Mondo";
	my_elem->set_name(temp_name);
	cout << "==tu	>>	Is modified name = 23460011?";
	printer::num_test_cases_eval();
	
	if(temp_name == my_elem->get_name()) {
		cout << "			Yes." << endl;
		printer::num_passed_test_cases_eval();
	}else{
		cout << "			NO!!!" << endl;
	}
}



/**
 * Function to test the hash functions regarding the name and
 *	objects (i.e., instances varaibles) of my_element.
 *	\cite{Nelson2011}
 * @param - None
 * @return - Nothing
 */
void test_my_element_hash_functions() {
	string temp_str = "Tu che abiti al riparo dell'Altissimo e dimori all'ombra dell'Onnipotente,"
	string t_name = "Il Signore è il mio pastore: non manco di nulla;";
	int t_index_number = 836491286;
	// Use
	my_element *my_elem = new my_element(t_name,t_index_number);
	cout << "Hash value of temp_str:";
	cout << my_elem->get_string_hash(temp_str);
	cout << "." << endl;
	cout << "Hash value of my_elem's name:" <<  << endl;
}
