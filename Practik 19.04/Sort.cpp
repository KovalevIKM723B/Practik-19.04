#include <iostream>
#include "Header.h"
using namespace std;

void Sort(int arr[5])
{
    cout << "Sorted array\n";
    int temp = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 4; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    for (int j = 0; j < 5; j++)
    {
        cout << arr[j] << '\t';
    }
	cout << endl;
}