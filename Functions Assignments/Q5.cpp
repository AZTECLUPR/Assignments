// Q5 - Given two numbers a and b, write a program to print all the prime numbers present between a and b.

#include <iostream>
using namespace std;

bool prime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }    
    }
    return true;
}
int main()
{
    int start, stop;
    cout << "Enter the range :\t";
    cin >> start >> stop;
    cout << "The prime numbers between the given range are :\n";
    for (int i = start; i <= stop; i++)
    {
        if (prime(i))
        {
            cout << i << "\t";
        }
    }
    return 0;
}