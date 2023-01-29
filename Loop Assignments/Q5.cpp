//Q5 - Write a program to print the cross pattern in the shape of X.

# include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the cross (use odd number) :\t";
    cin >> size;
    cout << "The cross pattern formed will be :\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j || (i + j) == (size - 1))
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