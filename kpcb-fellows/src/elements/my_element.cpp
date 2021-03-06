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

// Standard constructor #1.
my_element::my_element(string a_name, int an_index_number) {
	name = a_name;
	index_number = an_index_number;
}

// Standard constructor #2.
my_element::my_element(my_element *me) {
	name = me->get_name();
	index_number = me->get_index_number();
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


// -----------------------------------------------------

// Hash functions.

/**
 * Function to hash a string.
 *	\cite{Nelson2011}
 * @param str: A string to be hashed.
 * @return - Hash value of str.
 */
string my_element::get_string_hash(string str) {
	auto h = hash<string>{}(str);
	return to_string(h);
}


/**
 * Function to hash the name.
 *	\cite{Nelson2011}
 * @param - None.
 * @return - Hash value of name.
 */
string my_element::get_name_hash() {
	auto h = hash<string>{}(name);
	return to_string(h);
}


/**
 * Function to hash a my_element object.
 *	\cite{Nelson2011}
 * @param - None.
 * @return - Hash value of my_element object.
 */
string my_element::get_me_hash() {
	auto hash_val = hash<string>()(get_name()) ^ (hash<int>()(get_index_number()) << 1);
	return to_string(hash_val);
}


// -----------------------------------------------------
		
// Comparison functions.

/**
 * Function to compare itself to another my_element object.
 * @param obj: A my_element to be compared to current my_element
 *				object.
 * @return - Boolean TRUE if current my_element object is the same as
 *				obj. Else, return FALSE. 
 */
bool my_element::compare_my_element_objects(my_element *obj) {
	return ((get_name() == obj->get_name()) && (get_index_number() == obj->get_index_number()));
}


/**
 * Function to compare itself to another my_element object.
 * @param obj: A my_element to be compared to current my_element
 *				object.
 * @return - Boolean TRUE if current my_element object is the same as
 *				obj. Else, return FALSE. 
 */
bool my_element::compare_my_element_objects(my_element obj) {
	return ((get_name() == obj.get_name()) && (get_index_number() == obj.get_index_number()));
}
