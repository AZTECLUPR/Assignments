//Q1 - Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int even = 0, odd = 0;
    cout << "Enter the 5 elements :\n";
    for (int i = 0; i < size(arr); i++)
    {
        cin >> arr[i];
    }
    cout << "The elements entered are :\n";
    for (int i : arr)
    {
        cout << i << " ";
    }
    for (int i = 0; i < size(arr); i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "\nOdd Numbers =\t" << odd << endl;
    cout << "Even Numbers =\t" << even;
    return 0;
}