//Q4 - Write a C++ program to calculate the cube of a number.

#include <iostream>
#include <math.h>
using namespace std ;

int main()
{
    int number , power ;
    cout << "Enter the number :\t" ;
    cin >> number ;
    power = pow(number , 3) ;
    cout << "The cube of the number is :\t" << power << endl ;
    return 0 ;
}
