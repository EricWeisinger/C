#include "stdafx.h"
#include <iostream> 
using namespace std;

void repchar(char ch = '*', int n = 45)
{
	for (int i = 0; i < n; i++)
		cout << ch;
}

void repchar(char ch, int n)
{
	for (int i = 0; i < 45; i++)
		cout << ch;
	
}

void repchar(char ch)
{
	for (int i = 0; i < 30; i++)
		cout << ch;
}

int main()
{
	repchar();
	cout << endl;
	repchar('=');
	cout << endl;
	repchar('+', 30);
	cout << endl;


	return 0;
}