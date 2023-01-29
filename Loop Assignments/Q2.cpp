//Q2 - Write a program to print all Armstrong numbers between 100 to 500.

# include <iostream>
# include <math.h>
using namespace std;

int main()
{
    int range;
    cout << "Enter the range :\t";
    cin >> range;
    cout << "Armstrong Numbers till the range are :" << endl;
    for (int i = 0; i <= range; i++)
    {
        int sum = 0;
        int number = i;
        while (number != 0)
        {
            sum = sum + (pow((number % 10),3));
            number = number / 10;
        }
        if (sum == i)
        {
            cout << i << "\n";
        }
    }
    return 0;
}