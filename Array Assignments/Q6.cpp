// Q6 - Given an integer array containing n elements. Find the element in the array for which all the elements
//      to its left are smaller than it and all the elements to the right of it are larger than it.

#include <iostream>
using namespace std;

int findElement(int arr[], int n)
{
    int leftMax[n];
    leftMax[0] = INT_MIN;
    for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i - 1], arr[i - 1]);
    int rightMin = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        if (leftMax[i] < arr[i] && rightMin > arr[i])
            return arr[i];
        rightMin = min(rightMin, arr[i]);
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the range :\t";
    cin >> n;
    int arr[n];
    cout << "Enter the elements :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int output = findElement(arr, n);
    cout << "Output =\t" << output;
    return 0;
}