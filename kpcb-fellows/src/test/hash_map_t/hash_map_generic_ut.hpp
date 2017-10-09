/**
 * Test/Hash_map_t package:
 * Submodule of Test package to test classes in the Hash_map package.
 *
 * hash_map_generic_ut class:
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


// Import Header files from the other modules of the software.
// Hash_map module
//#include "../../../hash_map/hash_map.hpp"
#include "../../hash_map/hash_map.hpp"
// Utilities module
#include "../../utilities/printer.hpp"
#include "../../utilities/violated_assertion.hpp"
#include "../../utilities/violated_precondition.hpp"
#include "../../utilities/violated_postcondition.hpp"

// Import appropriate header files from the C++ STL
#include <random>		// For pseudo-random number generation, PRNG.
#include <cmath>		// For comparing floats.
#include <limits>		// For comparing floats.

#ifndef __HASH_MAP_GENERIC_UT_H
#define __HASH_MAP_GENERIC_UT_H



// ==================================================================

class hash_map_generic_ut {
//	private:
//		string err_msg;

	// --------------------------------------------------------------

	public:
		// Default constructor.
		hash_map_generic_ut();
				
		// ----------------------------------------------------------

		/**
		 * Function to test the constructors and functions of
		 *	my_element.
		 */
		static void test_hash_map_generic_ut();

		/**
		 * Function to test the standard constructor of the class
		 *	hash_map, and its accessor functions.
		 */
		static void test_hash_map_constructor_and_accessor_functions();

		/**
		 * Function to test the mutator functions regarding the
		 *	the number of items, or (key,value) pairs, of a
		 *	hash_map object.
		 */
		static void test_hash_map_mutator_functions();
};
#endif
