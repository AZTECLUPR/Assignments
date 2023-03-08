// Q4 - Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
//      that they belong to different arrays and are not at the same index.

#include <iostream>
using namespace std;
int minSum(int a[], int b[], int n)
{
    int minA = INT_MAX, minB = INT_MAX, indexA = 0, indexB = 0;
    int min2A = INT_MAX, min2B = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < minA)
        {
            min2A = minA;
            minA = a[i];
            indexA = i;
        }
        else if (a[i] < min2A)
            min2A = a[i];
        if (b[i] < minB)
        {
            min2B = minB;
            minB = b[i];
            indexB = i;
        }
        else if (b[i] < min2B)
            min2B = b[i];
    }
    if (indexA != indexB)
        return minA + minB;
    return min(min2A + minB, min2B + minA);
}
int main()
{
    int n = 5;
    int a[n], b[n];
    cout << "Enter the 5 elements :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the 5 elements :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int output = minSum(a,b,n);
    cout << "Output =\t" << output;
    return 0;
}
