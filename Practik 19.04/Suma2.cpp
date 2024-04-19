#include <iostream>
#include "Header.h"
using namespace std;

void Suma2(int arr[5])
{
	int suma2 = 0;
	for (int i = 0; i < 5; i++)
	{
		suma2 = suma2 + arr[i];
	}
	cout << "Array sum = " << suma2 << endl;
}