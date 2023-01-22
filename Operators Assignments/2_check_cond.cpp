#include <iostream>
using namespace std;

int main()
{
    int a , b ;
    cout << "Enter the values :\t" ;
    cin >> a >> b ;
    if (a < 50 && a < b)
    {
        cout << "The conditions have been met." ;
    }
    else
    {
        cout << "The conditions have not been met." ;
    }
    return 0 ;
}