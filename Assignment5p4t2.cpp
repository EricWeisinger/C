#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

	double rain, total = 0.0, inches = 0.0;
	int months = 4, years;

	cout << "This program will calculate average rainfall over period of years. \n";
	cout << "How many years do you wish to average? ";
	cin >> years;
	for (; years >0;)
	{
		for (int i = 1; i <= years; i++)
		{
			cout << "Year " << i << endl;
			for (int j = 1; j <= months; j++)
			{
				cout << "Number of inches of rain for month " << j << "? ";
				cin >> inches;
				for (; inches <= 0;)
				{
					cout << "Error: inches must be positive number greater than 0! \n";
					cout << "Number of inches of rain for month " << j << "? ";
					cin >> inches;
				}
			}
			total += inches;
		}
		rain = months * years;
		cout << "Over the time of " << rain << ", " << total << " inches of rain fell.\n";
		cout << "Average monthly rainfall for the period is " << total / rain << " inches.\n";

		return 0;
	}

	for (; years <= 0;)
	{
		cout << "Error: years must be an integer greater than 0! \n";
		cout << "How many years do you wish to average? ";
		cin >> years;
		for (int i = 1; i <= years; i++)
		{
			cout << "Year " << i << endl;
			for (int j = 1; j <= months; j++)
			{
				cout << "Number of inches of rain for month " << j << "? ";
				cin >> inches;
				for (; inches <= 0;)
				{
					cout << "Error: inches must be positive number greater than 0! \n";
					cout << "Number of inches of rain for month " << j << "? ";
					cin >> inches;
				}
			}
			total += inches;
		}
		rain = months*years;
		cout << "Over a period of " << months << " months, " << total << " inches of rain fell.\n";
		cout << "Average monthly rainfall for the period is " << total / rain << " inches.\n";
	}
	return 0;
}
