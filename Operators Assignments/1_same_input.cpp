//Q1 - Write a program to check whether two numbers (entered by user) are equal or not (0 for not equal, 1 for equal)

#include <iostream>
using namespace std;

int main()
{
    int num1 , num2 ;
    cout << "Enter the two numbers :\t" ;
    cin >> num1 >> num2 ;
    if (num1 == num2)
    {
        cout << "The numbers are same." ;
    }
    else
    {
        cout << "The numbers are not same." ;
    }   
    return 0 ;
}
