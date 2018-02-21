// Assignment7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


void getScore(int & ref);
void calcAverage(int test1, int test2, int test3, int test4, int test5);
int findLowest(int test1, int test2, int test3, int test4, int test5);

int main()
{
	int test1, test2, test3, test4, test5;

	getScore(test1);
	if (test1 < 0 || test1 > 100)
	{
		cout << "Please enter a number between 0 and 100 ";
		cin >> test1;
	}
	getScore(test2);
	if ( test2 < 0 ||  test2 > 100)
	{
		cout << "Enter a test score between 0 and 100 ";
		cin >> test2;
	}
	getScore(test3);
	if ( test3 < 0 || test3 > 100)
	{
		cout << "Enter a test score between 0 and 100 ";
		cin >> test3;
	}
	getScore(test4);
	if (test4 < 0 || test4 > 100)
	{
		cout << "Enter a test score between 0 and 100 ";
		cin >> test4;
	}
	getScore(test5);
	if (test5 < 0 || test5 > 100)
	{
		cout << "Enter a test score between 0 and 100 ";
		cin >> test5;
	}



	calcAverage(test1, test2, test3, test4, test5);
	//findLowest(test1, test2, test3, test4, test5);

	

	return 0;
}

void getScore(int & ref)
{
	cout << "Please enter a test score: ";
	cin >> ref;
}
int findLowest(int test1, int test2, int test3, int test4, int test5)
{
	int lowest = test1;
	if (test2 < lowest)
		lowest = test2;
	else if (test3 < lowest)
		lowest = test3;
	else if (test4 < lowest)
		lowest = test4;
	else
		lowest = test5;

	cout << "The lowest score is " << lowest << endl;

	return lowest;
}
void calcAverage(int test1, int test2, int test3, int test4, int test5)
{
	int sum;
	sum = test1 + test2 + test3 + test4 + test5;
	//int lowest;
	//lowest = findLowest(test1, test2, test3, test4, test5);
	sum = sum - findLowest(test1, test2, test3, test4, test5);
	cout << "After dropping the lowest score, the average is " << sum / 4.0 << endl;
}

