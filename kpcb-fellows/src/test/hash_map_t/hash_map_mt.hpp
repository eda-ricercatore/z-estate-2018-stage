/**
 * Test/Hash_map_t package:
 * Submodule of Test package to test classes in the Hash_map package.
 *
 * hash_map_mt class:
 * Class that tests the hash map package.
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

// Import Header files from the other modules of lamiera-per-caldaie.
// Test/Hash_map_t module
//#include "../../elements/my_element.hpp"
//#include "../elements/my_element.hpp"
//#include "my_element_ut.hpp"
//#include "elements_t/my_element_ut.hpp"
#include "../hash_map_t/hash_map_ut.hpp"
// Utilities module
#include "../../utilities/printer.hpp"
#include "../../utilities/violated_assertion.hpp"
#include "../../utilities/violated_precondition.hpp"
#include "../../utilities/violated_postcondition.hpp"


// Import "test" classes from the "sandbox".
//#include "../../sandbox/classes/simple_template.hpp"

// Import appropriate header files from the C++ STL
#include <iostream>
#include <string>

#ifndef __HASH_MAP_MT_H
#define __HASH_MAP_MT_H
using namespace std;

// ==================================================================

class hash_map_mt {
//	private:
//		string ex_msg;

	// --------------------------------------------------------------
	
	public:
		// Default constructor
		hash_map_mt();

		// ----------------------------------------------------------

		// Function to test different classes in the hash_map package.
		static void test_hash_map_mt();
};
#endif

