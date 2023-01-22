//Q5 - Write a program to calculate the sum of digits of a 3 digit number.

#include <iostream>
using namespace std ;

int main()
{
    int number, first, second, third, sum ;
    cout << "Enter the number :\t" ;
    cin >> number ;
    first = number / 100 ;
    second = (number % 100) / 10 ;
    third = number % 10 ;
    sum = first + second + third ;
    cout << "The sum of the digits are :\t" << sum ;
    return 0 ;
}