/**
 * Test/Elements_t package:
 * Submodule of Test package to test classes in the Elements package.
 *
 * elements_mt class:
 * Class that tests the elements package.
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
// Elements module
#include "../../elements/my_element.hpp"
#include "my_element_ut.hpp"
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

#ifndef __ELEMENTS_MT_H
#define __ELEMENTS_MT_H
using namespace std;

// ==================================================================

class elements_mt {
//	private:
//		string ex_msg;

	// --------------------------------------------------------------
	
	public:
		// Default constructor
		elements_mt();

		// ----------------------------------------------------------

		// Function to test different classes in the Utilities package.
		static void test_my_element();
};
#endif
