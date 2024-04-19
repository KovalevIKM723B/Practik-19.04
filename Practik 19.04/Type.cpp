#include <iostream>
#include "Header.h"
using namespace std;

void Type(int age)
{
	int a;
	if (age >= 0 && age <= 10)
	{
		a = 0;
	}
	else if (age > 10 && age < 18)
	{
		a = 1;
	}
	else if (age >= 18 && age <= 110)
	{
		a = 2;
	}
	else
	{
		a = 3;
	}
	switch (a)
	{
	case 0: cout << "Child\n"; break;
	case 1: cout << "Teenager\n"; break;
	case 2: cout << "Adult\n"; break;
	case 3: cout << "It cannot be\n"; break;
	}
}