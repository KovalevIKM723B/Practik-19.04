#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
    int a, b, fact, c;
    cout << "Enter 2 value\n";
    cin >> a >> b;
    cout << "Sum = " << Suma(a, b) << endl;
    cout << "Enter factorial\n";
    cin >> fact;
    cout << "Factorial = " << Factorial(fact) << endl;
    cout << "Enter value to check\n";
    cin >> c;
    Check(c);
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = rand() % 20;
    }
    cout << "Current array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << endl;
    Suma2(arr);
    Turn(arr);
    Sort(arr);
    int arr1[10], arr2[10];
    for (int i = 0; i < 10; i++)
    {
        arr1[i] = rand() % 20;
        arr2[i] = rand() % 20;
    }
    cout << "2 arrays\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr1[i] << '\t';
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr2[i] << '\t';
    }
    cout << endl;
    Same(arr1, arr2);
    cout << "Enter the length of the sides of the rectangle\n";
    int side1, side2;
    cin >> side1 >> side2;
    cout << Area(side1, side2) << endl << "Enter age\n";
    int age;
    cin >> age;
    Type(age);

}
