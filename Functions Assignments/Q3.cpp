// Q3 - Given the age of a person, write a function to check if the person is eligible to vote or not.

#include <iostream>
using namespace std;

void vote(int age)
{
    if (age >= 18)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
int main()
{
    int age;
    cout << "Enter the age of the person :\t";
    cin >> age;
    vote(age);
    return 0;
}