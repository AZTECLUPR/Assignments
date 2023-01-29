//Q10- Write a C++ program to print a rectangle out of *

#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the no. of rows :\t";
    cin >> row;
    cout << "Enter the no. of columns :\t";
    cin >> col;
    cout << "The rectangular box formed will be :" << endl;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == 1 || j == col)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}