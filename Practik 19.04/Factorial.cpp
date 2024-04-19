#include <iostream>
#include "Header.h"
using namespace std;

int Factorial(int fact)
{
	int suma = 1;
	for (int i = fact; i > 0; i--)
	{
		suma = suma * i;
	}
	return suma;
}