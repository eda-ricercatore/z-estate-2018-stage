/**
 * Elements package:
 * Module to contain class definitions and implementations of objects
 *	that would be stored in the hash map.
 *
 * my_element class:
 * Class to contain a name (i.e., a string) and an index number
 *	(i.e., a number/integer).
 * Accessor and mutator functions are provided for accessing and
 *	modifying these fields (i.e., the name and the index number).
 *
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


// Import Header files from the hash map implementation.
#include "elements_mt.hpp"


/**
 * Default constructor.
 *
 * Do NOT allow people to use it.
 */
elements_mt::elements_mt() {
	printer::debug_std_err("==tm	Don't instantiate elements_mt!");
	printer::debug_std_err("");
}




/**
 * Function to test different classes in the Elements package.
 * @param None
 * @return Nothing
 */
void utilities_mt::test_my_element() {
	// Testing the elements package
	printer::set_debugging_mode(true);
	printer::debug_std_op_ln("--------------------------------------------------------");
	printer::debug_std_op_ln("		TESTING the Elements package");
	printer::debug_std_op_ln("");
	printer::debug_std_op_ln("");
	printer::set_debugging_mode(false);
	// Test the class my_element.
	my_element_ut::test_my_element();
}






