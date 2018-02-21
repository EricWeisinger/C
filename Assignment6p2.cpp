#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

double fallingDistance(int t = 0);


int main()
{
	int t = 0;
	double d = 0;

	cout << "Seconds			" << "Distance" << endl;
	cout << "================================" << endl;

	for (int i = 1; i <= 10; i++)
	{
		d = fallingDistance(i);
		cout << fixed << setprecision(2);
		cout << i << "			" << d << " meters" << endl;
	}
	



		return 0;
}

double fallingDistance(int t)
{
	double d = 0;
	double g = 9.8;

	d = (0.5 * g) * (t * t);
	return d;
}