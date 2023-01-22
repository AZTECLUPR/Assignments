//Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and calculate Profit or Loss.

#include <iostream>
using namespace std ;

int main()
{
    int cost_price, sell_price, profit, loss ;
    cout << "Enter the Cost Price :\t" ;
    cin >> cost_price ;
    cout << "Enter the Selling Price :\t" ;
    cin >> sell_price ;
    if (sell_price > cost_price)
    {
        profit = sell_price - cost_price ;
        cout << "Profit :\t" << profit ;
    }
    else
    {
        loss = cost_price - sell_price ;
        cout << "Loss :\t" << loss ;
    }
    return 0 ;
}