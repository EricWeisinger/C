#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

float AddNumbers(float, float);
float SubtractNumbers(float, float);
float MultiplyNumbers(float, float);
float DivideNumbers(float, float);


void displayMenu();

void main(void)
{

	int choice;
	float Number1, Number2, Result;

	displayMenu();
	cin >> choice;
	do
	{
		if (choice > 0 && choice <= 5)
		{
			cout << endl << "Please enter two numbers: ";
			cin >> Number1 >> Number2;
		}
		
		switch (choice)
		{
		case 1:
			Result = AddNumbers(Number1, Number2);
			cout << "The numbers added are " << Result << endl;
			break;
		case 2:
			Result = SubtractNumbers(Number1, Number2);
			cout << "The numbers subtracted are " << Result << endl;
			break;

		case 3:
			Result = MultiplyNumbers(Number1, Number2);
			cout << "The numbers multiplied are " << Result << endl;
			break;

		case 4:
			Result = DivideNumbers(Number1, Number2);
			cout << "The numbers multiplied are " << Result << endl;
			break;


		case 5:
			cout << "Thank you for using the program!" << endl;
			break;
		default:
			cout << "You must choose between 1 and 5!" << endl;

		}

		displayMenu();
		cin >> choice;

	} while (choice != 5);
}

void displayMenu()
{
	cout << "Math Program: " << endl;
	cout << setw(8) << "1: Add two numbers" << endl;
	cout << setw(8) << "2: Subtract two numbers" << endl;
	cout << setw(8) << "3: Multiply two numbers" << endl;
	cout << setw(8) << "4: Divide two numbers" << endl;
	cout << setw(8) << "5: Quit" << endl;




}

float AddNumbers(float Num1, float Num2)
{
	return Num1 + Num2;
}

float SubtractNumbers(float Num1, float Num2)
{
	return Num1 - Num2;
}

float MultiplyNumbers(float Num1, float Num2)
{
	return Num1 * Num2;
}

float DivideNumbers(float Num1, float Num2)
{
	return Num1 / Num2;
}
