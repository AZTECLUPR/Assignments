//Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*)

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum, diff, prod, choice;
    float quot;
    cout << "Enter the two numbers :\t";
    cin >> num1 >> num2;
    cout << "1. Addition.\n2. Substraction.\n3. Multiplication.\n4. Division.\nEnter your choice :\t";
    cin >> choice;
    switch (choice)
    {
    case 1:
        sum = num1 + num2;
        cout << "Sum =\t" << sum << endl;
        break;
    case 2:
        diff = num1 - num2;
        cout << "Difference =\t" << diff << endl;
        break;
    case 3:
        prod = num1 * num2;
        cout << "Product =\t" << prod << endl;
        break;
    case 4:
        quot = (float)num1 / (float)num2;
        cout << "Quotient =\t" << quot << endl;
        break;
    default:
        cout << "Enter valid choice.\n";
        break;
    }
    return 0;
}
