//Q3 - Write a program to find the sum of n natural numbers.

#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;
    cout << "Enter the number :\t";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        sum = sum + i;
    }
    cout << "The factorial of the given number is :\t" << sum << endl;
    return 0;
}