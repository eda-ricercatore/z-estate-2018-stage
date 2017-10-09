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


// Import Header files from the hash map implementation.
#include "hash_map_mt.hpp"







/**
 * Default constructor.
 *
 * Do NOT allow people, such as hash_map_mt, to use it.
 */
hash_map_mt::hash_map_mt() {
	printer::debug_std_err("==tm	Don't instantiate hash_map_mt!");
	printer::debug_std_err("");
}




/**
 * Function to test different classes in the Hash_maps package.
 * @param None
 * @return Nothing
 */
void hash_map_mt::test_hash_map_mt() {
	// Testing the elements package
	printer::set_debugging_mode(true);
	printer::debug_std_op_ln("--------------------------------------------------------");
	printer::debug_std_op_ln("		TESTING the Hash_map package");
	printer::debug_std_op_ln("");
	printer::debug_std_op_ln("");
//	printer::set_debugging_mode(false);
	// Test the class my_element.
	hash_map_ut::test_hash_map_ut();
	hash_map_generic_ut::test_hash_map_generic_ut();
}
