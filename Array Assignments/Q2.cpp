//Q2 - Given an integer array and its size, find the sum of the greatest and the smallest integer present
//     in the array.

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int min = arr[0], max = arr[0];
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
        if (max > arr[i])
        {
            max = arr[i];
        }
        else
        {
            min = arr[i];
        }
    }
    cout << "\nThe sum of the max. & min. value is =\t" << (min + max);
    return 0;
}