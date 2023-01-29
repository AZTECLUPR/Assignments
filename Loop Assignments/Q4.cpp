//Q4 - Write a program to reverse a given integer number.

#include <iostream>
using namespace std;

int main()
{
    int number, reverse = 0;
    cout << "Enter the number :\t";
    cin >> number;
    while (number > 0)
    {
        reverse = (reverse * 10) + (number % 10) ;
        number = number / 10;
    }
    cout << "The reverse of the digits of the given number is :\t" << reverse;
    return 0;
}