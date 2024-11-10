/*
	Ryan Bachman
	University of Advancing Technology
	MS549 - Data Structures and Testing
	Fall 2024, Grad 2

	Assignment 2.1 - Recursion and Pointers
	functions.h
*/

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <chrono>

using namespace std;

void menu();

void permute(string permuteStr, int l, int r, vector<string>& result);

chrono::high_resolution_clock::time_point getStartTime();

chrono::high_resolution_clock::time_point getEndTime();

chrono::duration<double> elapsedTime(chrono::high_resolution_clock::time_point startHigh, chrono::high_resolution_clock::time_point endHigh);

void unitTests();