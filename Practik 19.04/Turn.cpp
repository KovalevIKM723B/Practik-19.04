#include <iostream>
#include "Header.h"
using namespace std;

void Turn(int arr[5])
{
	int temp = 0;
	for (int i = 0; i < 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[4 - i];
		arr[4 - i] = temp;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}