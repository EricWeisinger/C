#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	double pay, totalPay, numDays, dayCount;
	pay = .01;
	totalPay = .0;
	dayCount = 1;

	do {
		cout << "Please enter the number of days: ";
		cin >> numDays;
			if (numDays < 1)
				cout << "The number of days must be at least one." << endl;
	} while (numDays < 1);

	cout << "Day		" << "Total Pay" << endl;
	cout << "------------------------" << endl;

	for ( dayCount >= 1; dayCount <= numDays; dayCount++) {
		cout << dayCount << "		$" << pay << endl;
		totalPay = pay + totalPay;
		pay = pay * 2;
	}

	cout << "------------------------" << endl;
	cout << "Total\t\t$" << totalPay << endl;





	return 0;



}