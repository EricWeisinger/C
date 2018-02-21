#include "stdafx.h"
#include <iostream> 
using namespace std;

char repchar(char ch = '*', int n = 45)
{
	for (int i = 0; i < n; i++)
		cout << ch;
	return ch;
}
int main()
{
	cout << repchar() << endl;
	cout << repchar('=') << endl;;
	cout << repchar('+', 30) << endl;

	return 0;
}

