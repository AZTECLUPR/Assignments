//Q3 - Given an integer array and its size, reverse the array and print it .

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
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
    int start = 0;
    int end = size(arr) - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "\nThe elements after reversal are :\n";
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}