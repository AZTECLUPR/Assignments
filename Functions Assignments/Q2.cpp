// Q2 - Given radius of a circle. Write a function to print the area and circumference of the circle.

#include <iostream>
using namespace std;

float area(float radius)
{
    float area = 3.14 * radius * radius;
    return area;
}
float circumference(float radius)
{
    float circumference = 2 * 3.14 * radius;
    return circumference;
}
int main()
{
    float radius;
    cout << "Enter the radius of the circle :\t";
    cin >> radius;
    cout << "Area :\t" << area(radius) << endl;
    cout <<"Circumference :\t" << circumference(radius);
    return 0;
}