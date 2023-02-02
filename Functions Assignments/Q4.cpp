// Q4 - Given two numbers a and b, write a program using functions to print all the odd numbers between them.

#include <iostream>
using namespace std;

void odd(int start, int stop)
{
    for (int i = start; i <= stop; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << "\t";
        }
    }
}
int main()
{
    int start, stop;
    cout << "Enter the range :\t";
    cin >> start >> stop;
    cout << "The odd numbers between the given range are :\n";
    odd(start,stop);
    return 0;
}