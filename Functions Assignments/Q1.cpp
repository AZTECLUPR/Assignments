// Q1 - Write a function to print squares of the first 5 natural numbers.

#include <iostream>
using namespace std;

int print_square(int number)
{
    int square = number * number;
    return square;
}
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << print_square(i) << "\t";
    }
    return 0;
}