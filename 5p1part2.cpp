#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int speed, hours;
	do {

	
	cout << "What is the speed of the vehicle in mph? ";
	cin >> speed;
	if (speed < 0) {
		cout << "Please enter a non-negative number";
		cin >> speed;
	}
	} while (speed < 0);
	
	
	do
	{
	cout << "For how many hours has it traveled? ";
	cin >> hours;
	if (hours < 1) {
		cout << "Please enter a value of 1 or greater.";
		cin >> hours;
	}
	} while (hours < 1);


	cout << "Hour		" << "Distance Traveled in Miles" << endl;
	cout << "------------------------" << endl;
	
	int hourCount = 1;
	do 
	{
		 
		int distance = hourCount * speed;
		cout << hourCount << "		" << distance << endl;
		hourCount++;
	} while (hourCount <= hours);



	return 0;
}