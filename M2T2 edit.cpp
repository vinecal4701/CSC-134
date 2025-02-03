// CSC 134
// M2T2
// vinecal4701 (B. Vineyard)
// 1/29/2025

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
//This program will calculate and print a bill receipt

//this will calculate the price before tax
double price = 5.99;
cout << "The price is" << setw(12) << "$" << price << endl;

//this will calculate the amount of tax owed at 8%
double tax = 0.08;
cout << "The tax is 8%." << endl;
double taxcalc = price * tax;
cout << "Taxes added " << setw(12) << "$" << setprecision(2) << fixed << taxcalc << endl;

//this will print the total after taxes
double total = price + taxcalc;
cout << "Your total is " << setw(10) << "$"  << total << endl;
cout << endl;

     return 0;
}