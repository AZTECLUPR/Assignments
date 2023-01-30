// Q3 - Given two binary numbers, return the greatest of these numbers in decimal format.

#include <iostream>
using namespace std;

int bin_to_dec(int number)
{
    int answer = 0, pow = 1;
    while (number > 0)
    {
        int unit_digit = number % 10;
        answer = answer + unit_digit * pow;
        number = number / 10;
        pow = pow * 2;
    }
    return answer;
}
int main()
{
    int num1, num2;
    cout << "Enter the 1st Binary Number :\t";
    cin >> num1;
    cout << "Enter the 2nd Binary Number :\t";
    cin >> num2;
    num1 = bin_to_dec(num1);
    num2 = bin_to_dec(num2);
    if (num1 < num2)
    {
        cout << "The Greater Decimal Number is :\t" << num2;
    }
    else
    {
        cout << "The Greater Decimal Number is :\t" << num1;
    }
    return 0;
}