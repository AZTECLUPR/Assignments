//Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

#include <iostream>
using namespace std ;

int main()
{
    int number ;
    int first, sec_last ;
    cout << "Enter the number :\t" ;
    cin >> number ;
    first = number / 10000 ;
    sec_last = (number % 100) / 10 ;
    cout << "The sum is :\t" << first + sec_last ;
    return 0 ;
}