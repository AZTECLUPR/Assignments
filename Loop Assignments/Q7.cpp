/*Q7- Write a program to print + pattern given below :
  *
  *
*****
  *
  *
*/

#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows (odd no.) :\t";
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows; j++)
        {
            if (i == rows / 2)
            {
                cout << "*";
            }
            else if (j == rows / 2)
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