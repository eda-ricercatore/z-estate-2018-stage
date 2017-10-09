#	Introduction

## Problem Description

See [Problem Description](https://github.com/eda-ricercatore/z-estate-2018-stage/blob/master/kpcb-fellows/problem.md).

This is written by Zhiyang Ong to implement "a fixed-size hash map that
	associates string keys with arbitrary data object references" [KPCB staff 2017].

To optimize the data structure for algorithmic runtime and memory usage, do not
	copy the object [KPCB staff 2017]; instead, pass variables by reference.

###	Blurb of Problem Description

Design and implement a fixed-size hash map. 

## Design Decisions 

This document summarizes the design decisions of implementing a fixed-size
	hash map.

Design decisions:
+ *Python* and *Java* does not support implementations of fixed-sized linear
	containers (by default). 
	Hence, I am not going to implement a fixed-size hash map using *Python*
		or *Java*.
+ *GNU Octave* has poor support for object-oriented programming.
+ *C++* and *Java* support implementations of fixed-sized linear containers by
	default.
+ Select *C++* for memory-efficient implementation of the hash map, so that
	only references are passed/copied, rather than passing/copying the objects.
+ Implementation of hash map data structure.
	- Data type for the maximum capacity of the hash map is chosen to be
		"unsigned long long int", since it can store bigger values than the "int"
		data type.
		Hence, the data type for the number of items/pairs in the hash map
			would also be "unsigned long long int". 
	- Data type for the hash value (i.e., key) of the hash map is chosen to be a
		string, since it can support implementations of non-numerical hashing
		functions.
	- The default size of the fixed-size hash map is chosen to be 10, so that it
		is small enough to be tested exhaustively. 
	- Assume that this fixed-size hash map behaves as a set.
		When a user attempts to add duplicates into the hash map, this
			operation shall fail.
		That is, *set(key, value)* shall return false when duplicates of (key,value)
			pairs are added to the hash map.
		Also, *set(key, value)* shall return false when the *load factor* of the hash
			map is 1.
	- The function *delete(key)* is renamed as *delete_pair(key)* because the
		term *delete* is a special keyword in *C++*.
+ Testing the implementation of the fixed-size hash map.
	- Tested on generic *my_element* objects, which contains two fields: a string;
		and an interger.
	- Tested on generic objects, using *C++ templates*.


## Challenges

Determine if the templated hash map would require implementation of a hash
	function, or equivalent (e.g., a function object).


#	Organization of the Repository

This repository is organized into the following directories (and subdirectories):
+ binaries.
	+ makefile.
		For build automation.
	+ doxygen.config.
		For customizing *Doxygen*-generated documentation.
	+ [Temporary files, from building the *C++* software]
+ src (source code).
	- elements.
		Class definition and implementation for a simple object, used to test
			the implementation of the fixed-size hash map.
	- hash_map.
		Definition and implementation for a fixed-size hash map.
	- test.
		Code used for unit testing, module testing, and integration testing.
	  	Also, the software testing process involves grey-box testing (for
	  		functional requirements/specifications).
	  	The software testing process is automated and executed before
	  		each software commit.
	 - utilities.
	 	
+ problem.md.
	Description of the problem, "implementation of a fixed-size array."
+ readme.md.
	Basic documentation for the project.
+ references.
	PDF copy of the default application form for the  Kleiner Perkins Caufield &
		Byers Engineering Fellows program.



#	To-Do List

Stack of phrases that I was looking up:
+ array static variable C++
+ pair array C++
+ "std::pair"  equality operator


#	References

[KPCB staff 2017]
	KPCB staff, "Engineering Fellows Program," Kleiner Perkins Caufield &
		Byers, KPCB Menlo Park, Menlo Park, CA, 2017.
		Available online from "KPCB Fellows -- Jumpstart your career in Silicon
		Valley" at: \url{http://kpcbfellows.com/engineering/apply};
		September 29, 2017 was the last accessed date.


#	Author Information

The MIT License (MIT)

Copyright (c) <2017> < Zhiyang Ong >

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"	Che cosa significa?
