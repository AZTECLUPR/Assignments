//Q4- Write a program to print positive number entered by the user, if user enters a negative number, it is skipped.

#include <iostream>
using namespace std ;

int main()
{
    int number ;
    cout << "Enter the number :\t" ;
    cin >> number ;
    if (number < 0)
    {
        cout << "The number is negative and skipped." ;
    }
    else
    {
        cout << "The number entered is :\t"<< number ;
    }
    return 0 ;
}