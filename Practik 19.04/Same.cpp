#include <iostream>
#include "Header.h"
using namespace std;

void Same(int arr1[10], int arr2[10])
{
	int same[10], a = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr1[i] == arr2[j])
			{
				same[a] = arr1[i];
				a++;
			}
		}
	}
	cout << "Same elements\n";
	for (int i = 0; i < a; i++)
	{
		cout << same[i] << '\t';
	}
	cout << endl;
}