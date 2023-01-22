//Q5 - Write a C++ program to find size of basic data types.

#include <iostream>
using namespace std ;

int main()
{
    cout << "The size of integer is :\t" << sizeof(int) << endl ; 
    cout << "The size of character is :\t" << sizeof(char) << endl ;
    cout << "The size of floating point is :\t" << sizeof(float) << endl ;
    cout << "The size of double floating point is :\t" << sizeof(double) << endl ;
    cout << "The size of short is :\t" << sizeof(short) << endl ;
    cout << "The size of long is :\t" << sizeof(long) << endl ;
    cout << "The size of long long is :\t" << sizeof(long long) << endl ;
    cout << "The size of long double is :\t" << sizeof(long double) << endl ;
    cout << "The size of boolean is :\t" << sizeof(bool) << endl ;
    return 0 ;
}
