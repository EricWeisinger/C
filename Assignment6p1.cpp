// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int count = 0;
	double number;
	double total = 0.0;
	double average;

	ifstream inputFile;
	inputFile.open("C:\\Random.txt");
	
	while (inputFile >> number)
	{
		count++;
		total += number;

	}

	inputFile.close();

	average = total / count;

	cout << "Number of numbers: " << count << endl;
	cout << "Sum of the numbers: " << total << endl;
	cout << "Average of the numbers: " << average << endl;
	


    return 0;
}

