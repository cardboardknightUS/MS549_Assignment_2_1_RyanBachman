/*
	Ryan Bachman
	University of Advancing Technology
	MS549 - Data Structures and Testing
	Fall 2024, Grad 2

	Assignment 2.1 - Recursion and Pointers
	main.cpp
*/

#include "functions.h"

// Code starts running here.
int main()
{
	menu(); // Output basic instructions/menu stuff to the user.

	string inputStr;
	vector<string> permutationVctr;

	cout << "Please enter a string to get all permutations of it: ";
	cin >> inputStr;
	cout << endl;

	// Conduct unit testing here to test if the code works as part of the overall testing suite.
	unitTests();
	
	// For time testing a certain range of code. This gets the start time and stores it.
	// chrono::high_resolution_clock::time_point startTime = getStartTime();

	permute(inputStr, 0, inputStr.length() - 1, permutationVctr); // Run the permutation function which uses recursion.

	// Print out all permutations of the input string to the user.
	int iterator = 0;
	for (vector<string>::iterator it = permutationVctr.begin(); it != permutationVctr.end(); ++it)
	{
		cout << "Permutation at Vector[" << iterator << "] is: " << *it << endl; // Uses the iterator as a pointer to return the value to the user.
		++iterator;
	}

	cout << endl << "Your string (" << inputStr << ") has " << iterator << " permutations!\n" << endl;

	// For time testing a certain range of code. This gets the end time and stores it.
	// chrono::high_resolution_clock::time_point endTime = getEndTime();

	// Outputs the elapsed time to the user for performance testing purposes.
	// elapsedTime(startTime, endTime);

	return 0;
}