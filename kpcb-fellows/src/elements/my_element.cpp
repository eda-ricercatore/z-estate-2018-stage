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

// Import packages from the software
#include "my_element.hpp"

// Import packages from the C++ STL
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// ==================================================================

// Default constructor
my_element::my_element() {
	name = "Missing Name";
	index_number = UINT_MAX;
}

// Standard constructor.
my_element::my_element(string a_name, int an_index_number) {
	name = a_name;
	index_number = an_index_number;
}


// -----------------------------------------------------

// Accessor functions.

/**
 * Function to get the name of the my_element object.
 * @param - None
 * @return - Name of the my_element object.
 */
string my_element::get_name() {
	return name;
}


/**
 * Function to get the index number of the my_element object.
 * @param - None
 * @return - Index number of the my_element object.
 */
int my_element::get_index_number() {
	return index_number;
}


// -----------------------------------------------------

// Mutator functions.


/**
 * Function to update the name.
 * @param new_name:	New name for the my_element object.
 * @return - Nothing.
 */
void my_element::set_name(string new_name) {
	name = new_name;
	
	return;
}

/**
 * Function to update the index number.
 * @param new_index_number:	New index number for the my_element object.
 * @return - Nothing.
 */
void my_element::set_index_number(int new_index_number) {
	index_number = new_index_number;
	
	return;
}
