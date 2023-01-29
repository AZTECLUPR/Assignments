//Q1 - Write a program to calculate the factorial of a number.

#include <iostream>
using namespace std;

int main()
{
    int number, sum = 1;
    cout << "Enter the number :\t";
    cin >> number;
    cout << "The factorial of the given number is :" << endl;
    for (int i = 1; i <= number; i++)
    {
        sum = sum * i;
        cout << sum << endl;
    }
    return 0;
}