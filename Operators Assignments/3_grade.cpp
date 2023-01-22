/*Q3 - There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grades "A" if 17 boys made up 80% of the
students that received grades "A".*/

#include <iostream>
using namespace std ;

int main()
{
    int t_pupils, girls, boys = 17 ;
    t_pupils = (80 * 45) / 100 ;
    girls = t_pupils - boys ;
    cout << "Number of girls getting grade A :\t" << girls ;
    return 0 ;
}