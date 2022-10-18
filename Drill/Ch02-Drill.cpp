// Ch02-Drill.cpp
//
// Solution to Drill of Chapter 2 from Programming Principles and Practice Using C++ (2e)
//
//  6/19/20 Scott Wright: Initial version
//  3/25/21 Scott Wright: simplified

#include <iostream>
using std::cin;
using std::cout;
using std::flush;
using std::endl;

void keepwinopen();

/* ------------------------------------------------------------------------------------------------------------ */

int main()
{
	cout << "Programming Principles and Practice Using C++ (2e)\n";
	cout << "Chapter 2, Drill\n\n";

	cout << "Hello, World!" << endl;

	keepwinopen();

	return EXIT_SUCCESS;
}

/* ------------------------------------------------------------------------------------------------------------ */

#ifdef _MSC_VER
//
#include "Windows.h" // includes debugapi.h which declares BOOL IsDebuggerPresent()
//
void keepwinopen()	// terminate on user acknowledgement
{
	cout << '\n';

	if (IsDebuggerPresent())
		cout << "Press Enter to exit..." << flush, cin.get(); /* NOTE COMMA! */
}
//
#else /* ------------------------------------------------------------------------------------------------------ */

//
void keepwinopen() {} // not needed for Linux/gcc
//
#endif

// original keepwindowopen() code
//
/*
void keepwinopen()	// terminate on user acknowledgement
{
#ifdef _MSC_VER
		cout << "\nPress Enter to exit..." << flush; cin.get();
#endif
}
*/