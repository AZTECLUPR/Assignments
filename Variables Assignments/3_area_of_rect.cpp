//Q3 - Write a C++ program to take length and breadth of a rectangle and print its area.

#include<iostream>
using namespace std ;

int main()
{
    int length , breadth , area ;
    cout << "Enter the length & breadth of the rectangle :\t" ;
    cin >> length >> breadth ;
    area = length * breadth ;
    cout << "The area of the rectangle is :\t" << area << endl ; 
    return 0 ;
}
