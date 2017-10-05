/**
 * Test/Hash_map_t package:
 * Submodule of Test package to test classes in the Hash_map package.
 *
 * hash_map_ut class:
 * Class that tests the fixed-size hash map class.
 * The constructors and functions of the hash_map class shall be
 *	tested.
 * 
 * 
 *
 *
 * Copyright	(C)	<2017>	<Zhiyang Ong>
 * @author Zhiyang Ong
 * @version 1.0.0
 * @since September 29, 2017
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * 
 * Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"	Che cosa significa?
 */
 
 // Import Header files from modules of the software.
#include "hash_map_ut.hpp"



// Import appropriate header files from the C++ STL
//#include <string>
 
 
 
/**
 * Default constructor of the unit test for the class my_element.
 */
hash_map_ut::hash_map_ut() {
	printer::debug_std_err("==tu	Don't instantiate the tester for hash_map_ut.");
	printer::debug_std_err("");
	string err_msg = "==tu	Don't use hash_map_ut_ut's default constructor.";
	throw new violated_assertion(err_msg);
}

// ===========================================================

/**
 * Function to test the constructors and functions of hash_map.
 * @param - None.
 * @return - Nothing.
 */
void hash_map_ut::test_hash_map_ut() {
	printer::debug_std_op_ln("==tu	Testing: hash_map...");
	// Test the constructor.
	test_hash_map_constructor_and_accessor_functions();
	// Test mutator functions of the my_element class.
	test_hash_map_mutator_functions();
	printer::debug_std_op_ln("");
}


/**
 * Function to test the constructors of the class hash_map.
 * @param - None
 * @return - Nothing
 */
void hash_map_ut::test_hash_map_constructor_and_accessor_functions() {
	// Check if my_element is instantiated correctly.
	hash_map *hm = new hash_map();
	
	printer::debug_std_op("==tu	>>	Default constructor: maximum capacity = 10?");
	printer::num_test_cases_eval();
	if(10 == hm->get_maximum_capacity()) {
		printer::debug_std_op_ln("	Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_err("	NO!!!");
	}
	
	printer::debug_std_op("==tu	>>	Default constructor: number of pairs = 0?");
	printer::num_test_cases_eval();
	if(0 == hm->get_number_of_pairs()) {
		printer::debug_std_op_ln("	Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_err("	NO!!!");
	}

	// Create a my_element object.
	unsigned long long int temp_number = 234237894538;
	my_element *my_elem = new my_element("Temporary name", temp_number);
	/**
	 * Search for this my_element object in the array implementation
	 *	of hash_map object.
	 */
	printer::debug_std_op("==tu	>>	Empty (*hm) contains my_elem?");
	printer::num_test_cases_eval();
	if((NULL == hm->get(my_elem->get_string_hash(my_elem->get_name())))
		&& (ULLONG_MAX == hm->find(my_elem->get_string_hash(my_elem->get_name())))) {
		printer::debug_std_op_ln("			Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_err("	NO!!!");
	}
	
	printer::debug_std_op("==tu	>>	Empty (*hm) has load factor of 0?");
	printer::num_test_cases_eval();
	if(0.0 == hm->load()) {
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_err("	NO!!!");
	}
	
	printer::debug_std_op("==tu	>>	Empty (*hm) has 0 number of (key,value) pairs?");
	printer::num_test_cases_eval();
	if(0 == hm->get_number_of_pairs()) {
		printer::debug_std_op_ln("	Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_err("	NO!!!");
	}
	
	printer::debug_std_op("==tu	>>	Std constructor's max capacity = 12345001?");
	unsigned long long int temp_maximum_capacity = 12345001;
	hm = new hash_map(temp_maximum_capacity);
	printer::num_test_cases_eval();
	if(temp_maximum_capacity == hm->get_maximum_capacity()) {
		printer::debug_std_op_ln("	Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_err("	NO!!!");
	}
	
	printer::debug_std_op("==tu	>>	Standard constructor: number of pairs = 0?");
	printer::num_test_cases_eval();
	if(0 == hm->get_number_of_pairs()) {
		printer::debug_std_op_ln("	Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_err("	NO!!!");
	}
}



/**
 * Function to test the mutator functions of a my_element object.
 * @param - None
 * @return - Nothing
 */
void hash_map_ut::test_hash_map_mutator_functions() {
	// Use default constructor to instantiate my_element.
	hash_map *hm = new hash_map();
	
	// Create a my_element object.
	unsigned long long int temp_number = 234237894538;
	my_element *my_elem = new my_element("Temporary name", temp_number);
	// Try to delete this my_element object from the empty hash map.
	my_element *resultant_elem = hm->delete_pair(my_elem->get_me_hash());
	printer::debug_std_op("==tu	>>	Can't delete (key,value) from empty hash map?");
	printer::num_test_cases_eval();
	if(NULL == resultant_elem) {
		printer::debug_std_op_ln("	Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_err("			NO!!!");
	}
//printer::debug_std_op_ln("Adding pair to empty hash map");


	printer::debug_std_op("==tu	>>	Add my_elem to the empty hash map?");
	printer::num_test_cases_eval();
	if(hm->set(my_elem->get_me_hash(),my_elem)) {
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_err("			NO!!!");
	}
}
