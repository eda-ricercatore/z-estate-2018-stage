/**
 * Hash_map package:
 * Module to contain class definitions and implementations of the
 *	hash map data structure.
 *
 * hash_map class:
 * Class to imeplement a fixed-size hash map container (i.e., data
 *	structure).
 * Accessor and mutator functions are provided for searching, adding,
 *	and removal of (key, value) pairs.
 * It supports miscellaneous tasks/functions, such as determining
 *	the load factor.
 * Assumes that each value has a unique hash key.
 * Assume that multiple values cannot be hashed to the same key. 
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
 * Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"	Che cosa significa?
 */

// Import packages from the software
// Utilities package/module.
#include "../utilities/violated_assertion.hpp"
#include "../utilities/violated_precondition.hpp"
#include "../utilities/violated_postcondition.hpp"
#include "../utilities/printer.hpp"
// Elements package/module.
#include "../elements/my_element.hpp"

// Import packages from the C++ STL
#include <iostream>
#include <string>
#include <cstring>
#include <limits.h>			// For std::UINT_MAX


// Importing from Boost C++ Library
//#include <boost/functional/hash.hpp>



#ifndef __HASH_MAP_H
#define __HASH_MAP_H
using namespace std;

// =========================================================

/**
 * Shortcut to a dynamic array of (key, value) pairs.
 */
typedef pair<string, my_element*> *pair_str_myelement;

// =========================================================

// Class definition of the hash_map class
class hash_map {
	// Publicly accessible data members, constructors, and functions
	public:
		// Default constructor.
		hash_map();
		/**
		 * Standard constructor, with its size (maximum capacity)
		 *	has an input parameter.
		 */
		hash_map(unsigned long long int size);
		
		// Default destructor.
		~hash_map();

		// -----------------------------------------------------
		
		// Define headers for functions...
	
		// Accessor functions.
		
		// Function to get the index number of the my_element object.
		my_element* get(string key);
		
		// Function to get the load factor of the fixed-size hash map.
		float load();

		/**
		 * Function to get the index in the array hash map for the
		 *	(key,value) pair.
		 */
 		unsigned long long int find(string key);

		// -----------------------------------------------------

		// Mutator functions.
		
		// Function to add the pair (key, value) to the hash map.
		bool set(string key, my_element value);
		
		/**
		 * Function to delete the (key,value) pair associated with
		 *	the key with the value 'key'.
		 */
		my_element* delete_pair(string key);
	
	// =========================================================
	
	// Privately accessible data members and functions.
	
	private:
		/**
		 * Maximum capacity of hash map data structure.
		 *
		 * Data type for the maximum capacity of the hash map is
		 *	chosen to be "unsigned long long int", since it can store
		 *	bigger values than the "int" data type.
		 */
		unsigned long long int maximum_capacity;

		// Number of items/pairs in the hash map data structure.
		unsigned long long int number_of_pairs;
		
		// Array of pair_str_myelement, pair<string, my_element>.
		pair_str_myelement psm;

		// -------------------------------------------------------
		
		// Define headers for private functions...

		// Accessor functions.

		/**
		 * Function to get the number of items or (key,value) pairs
		 *	in the hash map.
		 */
		unsigned long long int get_number_of_pairs();

		// Function to get the maximum capacity of the hash map.
		unsigned long long int get_maximum_capacity();

		// -----------------------------------------------------

		// Mutator functions.
		
		/**
		 * Function to increment the number of items or (key,value)
		 *	pairs in the hash map by one.
		 */
		void increment_number_of_pairs();
};
#endif















