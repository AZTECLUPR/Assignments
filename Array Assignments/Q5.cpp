//Q5 - Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive
//     of both 0 and n). Find and return the only number of the range that is not present in the array.

#include <iostream>
using namespace std;
int val(int arr[], int n)
{
    int missing = -1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int range_sum = (n) * (n + 1) / 2;
    missing = range_sum - sum;
    return missing;
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
    int output = val(arr,n);
    cout << "Output = \t" << output;
    return 0;
}