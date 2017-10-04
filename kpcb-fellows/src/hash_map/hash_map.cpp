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
 * Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"	Che cosa significa?
 */

// Import packages from the software.
//	hash_map package.
#include "hash_map.hpp"


using namespace std;

// =========================================================

/**
 * Shortcut to a pair representing (key, value).
 */
typedef pair<string, my_element> pair_str_myelement;

// =========================================================

// Default constructor.
hash_map::hash_map() {
	/**
	 * Choose the default size of the fixed-size hash map to be 10,
	 *	so that it is small enough to be tested exhaustively.
	 */
	maximum_capacity = 10;
	number_of_pairs = 0;
	psm = new pair<string, my_element>[maximum_capacity];
}


/**
 * Standard constructor, with its size (maximum capacity) has an
 *	input parameter.
 */
hash_map::hash_map(unsigned long long int size) {
	maximum_capacity = size;
	number_of_pairs = 0;
	pair_str_myelement = new pair<string, my_element>[maximum_capacity];
}


// -----------------------------------------------------

// Accessor functions.

/**
 * Function to get the value associated with the key 'key'.
 * The key 'key' and the value 'value' are associated as a (key,value)
 *	pair.
 * @param key: The search key 'key'.
 * @return - If the key 'key' can be found in the array
 *	implementation of the hash map, return the value corresponding
 *	to the key 'key'. Else, return null.
 */
my_element hash_map::get(string key) {
	//
}
		
/**
 * Function to get the load factor of the fixed-size hash map.
 * @param - None.
 * @return - Load factor of the fixed-size hash map.
 */
float hash_map::load() {
	// Return the load factor of the fixed-size hash map.
	return static_cast<float>(get_number_of_pairs()/get_maximum_capacity());
}


/**
 * Function to get the index in the array implementation of the hash
 *	map for the (key,value) pair.
 * If the key 'key' cannot be found in the array, return ULLONG_MAX.
 *	 
 */
unsigned long long int find(string key) {
	/**
	 * For each (key,value) pair in the array implementation of a
	 *	hash map...
	 */
	for(int i=0; i<maximum_capacity; i++) {
		// Is its key equal to the search key 'key'?
		if(0 == (psm[i].first).compare(key)) {
			// Yes. Return current index in the array.
			return i;
		}
	}
	// The key 'key' cannot be found in the array.
	return ULLONG_MAX;
}

// -----------------------------------------------------

// Mutator functions.
		
/**
 * Function to add the pair (key, value) to the hash map.
 * Let this hash map be a set.
 * If the (key,value) pair (to be added) already exists in the hash
 *	map, don't add the (key,value) pair to the hash map. 
 * @param key: The key of a (key,value) pair.
 * @return - Boolean 'true', if the (key,value) pair is stored in the
 *	hash map. Else, return false.
 */
boolean hash_map::set(string key, my_element value) {
	return false;
}


/**
 * Function to delete the (key,value) pair associated with
 *	the key 'key'.
 * Firstly, find the 'key' in the hash map for the (key,value) pair.
 * Secondly, temporary store the 'value' for this pair.
 * Thirdly delete the 'key' and the 'value' for this pair.
 * Lastly, return the 'value'.   
 * @param key: The key of a (key,value) pair to be deleted from the
 *	hash map.
 * @return - If the delete operation is successfully carried out,
 *	return the value 'value' of (key,value) pair. Else, return null.
 */
my_element hash_map::delete_pair(string key) {
	// 
}


// -------------------------------------------------------
		
// Private functions...

/**
 * Function to get the number of items or (key,value) pairs
 *	in the hash map.
 * @param - None.
 * @return - The number of items or (key,value) pairs in the
 *	hash map.
 * @postcondition - (number_of_pairs <= maximum_capacity) must be true.
 */
unsigned long long int hash_map::get_number_of_pairs() {
	if (number_of_pairs > maximum_capacity) {
		throw new violated_postcondition();
	}

	return number_of_pairs;
}


/**
 * Function to get the maximum capacity of the hash map.
 * @param - None.
 * @return - The maximum capacity of the hash map.
 * @postcondition - (number_of_pairs <= maximum_capacity) must be true.
 */
unsigned long long int hash_map::get_maximum_capacity() {
	if (number_of_pairs > maximum_capacity) {
		throw new violated_postcondition("number_of_pairs > maximum_capacity. Accessor.");
	}

	return maximum_capacity;
}


/**
 * Function to increment the number of items or (key,value)
 *	pairs in the hash map by one.
 * @param - None.
 * @return - Nothing.
 */
void hash_map::increment_number_of_pairs() {
	if (number_of_pairs < maximum_capacity) {
		number_of_pairs = number_of_pairs + 1;
	}else{
		throw new violated_assertion("Hash map is at maximum capacity.");
	}
	
	if (number_of_pairs > maximum_capacity) {
		throw new violated_postcondition("number_of_pairs > maximum_capacity. Mutator.");
	}
}
