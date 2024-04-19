#include <iostream>
#include "Header.h"
using namespace std;

void Check(int c)
{
	if (c == 2 || c == 3)
	{
		cout << c << " - not prime number\n";
	}
	else if (c % 2 == 0 || c % 3 == 0)
	{
		cout << c << " - prime number\n";
	}
	else
	{
		cout << c << " - not prime number\n";
	}
}