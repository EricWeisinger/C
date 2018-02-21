#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {

	double numOfYears, yearCount, monthCount, rainfall, total, totalMonths, avgRain;

	yearCount = 1;
	monthCount = 1;
	total = 0;

	cout << "This program will calculate average rainfall over a "
		"period of years. How many years do you wish to average? ";
	cin >> numOfYears;


	for (yearCount = 1; yearCount <= numOfYears; yearCount++) {
		cout << "Year " << yearCount << ":" << endl;
		for (monthCount = 1; monthCount <= 4; monthCount++) {
			cout << "Number of inches of rain for month " << monthCount << "? ";
			cin >> rainfall;
			total += rainfall;
		}
	
	}
	
		monthCount--;
		avgRain = total / (numOfYears * 4);
		totalMonths = monthCount * numOfYears;

	cout << "Over a period of " << totalMonths << " months, " << total << " inches of rain fell." << endl;
	cout << "Average monthly rainfall for the period is " << avgRain << " inches. " << endl;




}