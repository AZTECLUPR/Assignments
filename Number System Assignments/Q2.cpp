// Q2 - Given a natural number, find the number of 0’s in the binary representation of that number.

#include <iostream>
using namespace std;

int main()
{
    int number, count = 0, answer = 0, pow = 1;
    cout << "Enter the Decimal Number :\t";
    cin >> number;
    while (number > 0)
    {
        int unit_digit = number % 2;
        answer = answer + unit_digit * pow;
        number = number / 2;
        pow = pow * 10;
        if (unit_digit == 0)
        {
            count++;
        }
    }
    cout << "The Binary Number is :\t" << answer;
    cout << "\nThe number of zeroes is :\t" << count;
    return 0;
}
