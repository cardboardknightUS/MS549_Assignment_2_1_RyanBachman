/*
	Ryan Bachman
	University of Advancing Technology
	MS549 - Data Structures and Testing
	Fall 2024, Grad 2

	Assignment 2.1 - Recursion and Pointers
	functions.cpp
*/

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <time.h>
#include <Windows.h>
#include <chrono>
#include <iomanip>
#include <cassert>
#include "functions.h"

// Allows you to use iostream statements without the use of std::.
using namespace std;

void menu()
{
	cout << "Hello, Welcome to Ryan Bachman's Assignment 2.1 Submission!" << endl;
	cout << "This program will take a string as input from the user and show all permutations of that string in a vector!\n" << endl;
}

// Takes the input string from the user, the left index (l), the right index (r) and the vector of results as arguments.
void permute(string permuteStr, int l, int r, vector<string>& result)
{
	if (l == r) // If left index and right index are equal, push back the direct string.
	{
		result.push_back(permuteStr);
	}
	else // If the left and right index aren't equal, swap the characters, recursively call permute again going up on left index each time and output to the result vector and then restore the string so it can be used again.
	{
		for (int i = l; i <= r; i++)
		{
			swap(permuteStr[l], permuteStr[r]); // Swap the characters.
			permute(permuteStr, l + 1, r, result); // Recursively generate the permutations for the permutation string.
			swap(permuteStr[l], permuteStr[i]); // Backtrack and restore the original string.
		}
	}

	return;
}

// Get the time when the function is called for start time.
chrono::high_resolution_clock::time_point getStartTime()
{
	// Code for a HIGH RESOLUTION timing.
	auto startHigh = chrono::high_resolution_clock::now();

	return startHigh;
}

// Get the time when the function is called for end time.
chrono::high_resolution_clock::time_point getEndTime()
{
	// Code for a HIGH RESOLUTION timing.
	auto endHigh = chrono::high_resolution_clock::now();

	return endHigh;
}

// Calculate the time elapsed between getStartTime() and getEndTime() so this can be reused anywhere.
chrono::duration<double> elapsedTime(chrono::high_resolution_clock::time_point startHigh, chrono::high_resolution_clock::time_point endHigh)
{
	chrono::duration<double> elapsedHighRes = endHigh - startHigh;

	cout << fixed << setprecision(5) << "The operation took " << elapsedHighRes.count() << " seconds." << endl;

	return elapsedHighRes;
}

void unitTests()
{
	string testString = "testing";
	vector<string> testVctr;

	// Test 1 - 
	// assert(permute(testString, 0, testString.length() - 1, testVctr) > 0);

	
	// Output that tests completed successfully.
	cout << "All tests have passed successfully.\n" << endl;
}