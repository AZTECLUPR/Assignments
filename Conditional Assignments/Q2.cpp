//Q2 - Write a program to print absolute value of a number entered by the user.

#include <iostream>
#include <math.h>
using namespace std ;

int main()
{
    int number ;
    cout << "Enter the number :\t" ;
    cin >> number ;
    if (number < 0)
    {
        cout << "The absolute value of the number is :\t" << abs(number) ;
    }
    else
    {
        cout << "The absolute value of the number is :\t" << number ;
    }
    return 0 ;
}