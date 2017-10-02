/**
 * @author Zhiyang Ong
 *
 * Sandbox for the hash function.
 * Test my hash function on my_element objects.
 *
 *
 *
 * #### IMPORTANT NOTES:
 * Use the chrono library from the STL for timing measurements
 *	\cite{Mohanty2016}.
 *
 * To be completed...
 *
 *
 *
 *
 *
 *
 *
 * The MIT License (MIT)
 *
 * Copyright	(C)	<2017>	<Zhiyang Ong>
 *
 * Permission is hereby granted, free of charge, to any person
 *	obtaining a copy of this software and associated documentation
 *	files (the "Software"), to deal in the Software without
 *	restriction, including without limitation the rights to use, copy,
 *	modify, merge, publish, distribute, sublicense, and/or sell copies
 *	of the Software, and to permit persons to whom the Software is
 *	furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 *	included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *	EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *	MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *	NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 *	HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 *	WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 *	DEALINGS IN THE SOFTWARE.
 * 
 * 
 * Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"	Che cosa significa?
 */

// Import Header files from the C++ STL
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>
#include <math.h>
#include <climits>
#include <cfloat>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
// For timing measurements
#include <chrono>

/**
 * std::hash is a functor type, which is stateless, not a hash
 *	function.
 */


// Graph module
//#include "graph_t/graph_mt.hpp"

// Import "test" classes from the "sandbox". Test works when its code are not used.
//#include "../sandbox/classes/simple_template.hpp"
#include "my_element_sandbox.hpp"


using namespace std;

// =======================================================================

// FIX THESE!!!
// Shortcuts to use data structures and iterators from the STL
// Shortcut to represent list of blk_pins
//typedef list<blk_pin *> blk_pin_list;
// Shortcut to represent a pointer to list of blk_pins
//typedef list<blk_pin *>::iterator blk_pin_l_p;

// =======================================================================

// Start of main function...
int main(int argc, char *argv[]) {
	cout << "==============================================" << endl;
	cout << "		- Test Hash Function -" << endl;

	my_element_sandbox *a = new my_element_sandbox();
/*
	string s = "This is an example string";
	auto h = hash<string>{}(s);
	cout << "The hash of '" << s << "' is " << h << endl;
*/

	cout << "Hash value is:" << a->get_string_hash("Hello World");
	cout << "." << endl;

	cout << "" << endl;
	cout << endl;
	auto t1 = chrono::steady_clock::now();
	cout << "Hash value is:" << a->get_mes_hash()<<"."<<endl;
	auto t2 = chrono::steady_clock::now() - t1;
	// Duration of hash function get_mes_hash() in seconds.
	double t2_double = chrono::duration<double>(t2).count();
	cout << "Duration of get_mes_hash():"<<t2_double<<" seconds."<<endl;

	cout << "==============================================" << endl;
	// End of main function...
	return 0;
}
