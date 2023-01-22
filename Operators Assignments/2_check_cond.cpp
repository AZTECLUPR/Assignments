//Q2 - Write a program to take the values of two variables a and b from the keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.

#include <iostream>
using namespace std;

int main()
{
    int a , b ;
    cout << "Enter the values :\t" ;
    cin >> a >> b ;
    if (a < 50 && a < b)
    {
        cout << "The conditions have been met." ;
    }
    else
    {
        cout << "The conditions have not been met." ;
    }
    return 0 ;
}
