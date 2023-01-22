//Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication and division.

#include <iostream>
using namespace std ;

int main()
{
    int num1, num2, sum, diff, prod ;
    float quot ;
    char choice ;
    cout << "Enter an operator :\t" ;
    cin >> choice ;
    cout << "Enter the two numbers :\t" ;
    cin >> num1 >> num2 ;
    switch (choice)
    {
    case '+':
        sum = num1 + num2;
        cout << "Sum =\t" << sum << endl;
        break;
    case '-':
        diff = num1 - num2;
        cout << "Difference =\t" << diff << endl;
        break;
    case '*':
        prod = num1 * num2;
        cout << "Product =\t" << prod << endl;
        break;
    case '/':
        quot = (float)num1 / (float)num2;
        cout << "Quotient =\t" << quot << endl;
        break;
    default:
        cout << "Enter valid choice.\n";
        break;
    }
    return 0;
}