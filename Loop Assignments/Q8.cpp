// Q8 - Write a C++ program to print a triangle of prime numbers upto given number of lines of the triangle.

#include <iostream>
using namespace std;
int main()
{
    int x1;
    int x2;
    int x3;
    int Number = 3;
    int Banner = 0;
    cout << "Enter the number of rows :\t";
    cin >> x1;
    int d = x1;
    for (x2 = 1; x2 <= x1; x2++)
    {
        for (int e = 1; e <= d; e++)
        {
            cout << " ";
        }
        if (x2 == 1)
        {
            cout << "2\n";
        }
        else
        {
            for (x3 = 0; x3 != x2;)
            {
                Banner = 0;
                for (int k = 2; k < Number; k++)
                {
                    if ((Number % k) == 0)
                        Banner = 1;
                }
                if (Banner == 0)
                {
                    x3++;
                    cout << Number << " ";
                }
                Number++;
            }
            cout << endl;
        }
        d--;
    }
    return 0;
}