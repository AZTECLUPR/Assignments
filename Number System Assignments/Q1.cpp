// Q1 - Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.

#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    int answer = 0, pow = 1;
    for (int i = 0; i <= 5; i++)
    {
        number = number + i;
    }
    while (number > 0)
    {
        int unit_digit = number % 2;
        answer = answer + unit_digit * pow;
        number = number / 2;
        pow = pow * 10;
    }
    cout << "The Binary Number is :\t" << answer;
    return 0;
}