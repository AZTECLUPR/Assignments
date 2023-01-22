#include <iostream>
using namespace std ;

int main()
{
    int a , b , temp ;
    cout << "Enter the two numbers :\t" ;
    cin >> a >> b ;
    cout << "A =\t" << a << "\t" << "B =\t" << b << endl ;
    temp = a ;
    a = b ;
    b = temp ;
    cout << "After Swapping" << endl << "A =\t" << a << "\t" << "B =\t" << b << endl ;
    return 0 ;
} // namespace std ;