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