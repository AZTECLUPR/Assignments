// Q1 - Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.

#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;
    int answer = 0, pow = 1;
    cout << "Enter the number :\t";
    cin >> number;
    for (int i = 0; i <= number; i++)
    {
        sum = sum + i;
    }
    while (sum > 0)
    {
        int unit_digit = sum % 2;
        answer = answer + unit_digit * pow;
        sum = sum / 2;
        pow = pow * 10;
    }
    cout << "The Sum of the numbers in Binary is :\t" << answer;
    return 0;
}
