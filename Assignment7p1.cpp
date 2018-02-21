#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double getSales(string);
void findHighest(double, double, double, double);

int main()
{
	double neSales, seSales, nwSales, swSales;
	for (int i = 0; i < 4; i++)
	{
		switch (i)
		{
		case 0:
			neSales = getSales("Northeast");
			break;
		case 1:
			seSales = getSales("Southeast");
			break;
		case 2:
			nwSales = getSales("Northwest");
			break;
		default:
			swSales = getSales("Southwest");
			break;
		}
	}

	findHighest(neSales, seSales, nwSales, swSales);
}

double getSales(string name)
{
	double sales = 0;

	cout << "Enter the quarterly sales for the " << name << " division: ";
	cin >> sales;

	while (sales < 0)
	{
		cout << "Sales cannot be a negative number. $";
		cin >> sales;
	}
	return sales;
}

void findHighest(double neSales, double seSales, double nwSales, double swSales)
{
	double highest = 0;
	string division = "";

	if (neSales > seSales && neSales > nwSales && neSales > swSales)
	{
		highest = neSales;
		division = "Northeast";
	}
	else if (seSales > neSales && seSales > nwSales && seSales > swSales)
	{
		highest = seSales;
		division = "Southeast";
	}
	else if (nwSales > seSales && nwSales > neSales && nwSales > swSales)
	{
		highest = nwSales;
		division = "Northwest";
	}
	else
	{
		highest = swSales;
		division = "Southwest";
	}

	cout << "The " << division << " division had the highest sales this quarter. " << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "That division's sales were $" << highest << endl;
}