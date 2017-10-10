/**
 * Test/Hash_map_t package:
 * Submodule of Test package to test classes in the Hash_map package.
 *
 * fs_hash_map_ut class:
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
#include "fs_hash_map_ut.hpp"



// Import appropriate header files from the C++ STL
//#include <string>
 
 
 
/**
 * Default constructor of the unit test for the class my_element.
 */
fs_hash_map_ut::fs_hash_map_ut() {
	printer::debug_std_err("==tu	Don't instantiate the tester for fs_hash_map_ut.");
	printer::debug_std_err("");
	string err_msg = "==tu	Don't use fs_hash_map_ut_ut's default constructor.";
	throw new violated_assertion(err_msg);
}

// ===========================================================

/**
 * Function to test the constructors and functions of hash_map.
 * @param - None.
 * @return - Nothing.
 */
void fs_hash_map_ut::test_fs_hash_map_ut() {
	printer::debug_std_op_ln("==tu	Testing: fs_hash_map...");
	
	fs_hash_map<my_element> *fshm_mye = new fs_hash_map<my_element>();
	my_element mye = my_element("Ciao Mondo", 3456789);
	pair<string, my_element*> temp_pair = static_cast<pair<string, my_element*> >(make_pair(mye.get_me_hash(),mye));
	fshm_mye->fshm.push_back(temp_pair);
	if((*fshm_mye).set(mye.get_me_hash(),mye)) {
		printer::debug_std_op_ln("==tu	Added element???	Yes.");
	}else{
		printer::debug_std_op_ln("		No elements added.");
	}
	
	
	
	printer::debug_std_op_ln("");
}
