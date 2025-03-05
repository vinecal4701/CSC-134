#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

void question_1();
void question_2();
void question_3();
void question_4();

int main(){

    //This program will calculate and print a bill receipt
string choice;
double price = 5.99;
double tax = 0.08;
double tip = 0.15;
cout << "Hello, are you [dining] in or [carrying] out?" << endl;
cin >> choice;

if ("dining" == choice){
    cout << "The price is " /*<< setw(12)*/ << "$" << price << endl;
    cout << "The tax is 8%." << endl;
double taxcalc = price * tax;
cout << "A 15% tip will be added to your order since you are dining in." << endl;

//this will print the total after taxes
double tipcalc = price * tip;
cout << "Price " << setw(12) << "$" << price << endl;
cout << "Tip " << setw(14) << setprecision(2) << fixed << "$" << tipcalc << endl;
cout << "Taxes added " << setw(6) << "$" << setprecision(2) << fixed << taxcalc << endl;
double total = price + taxcalc + tipcalc;
cout << "Your total is " << setw(4) << "$"  << total << endl;
cout << endl;
}
else if ("carrying" == choice){
    //cout << "The price is " /*<< setw(12)*/ << "$" << price << endl;
    cout << "The tax is 8%." << endl;
double taxcalc = price * tax;

//this will print the total after taxes
cout << "Price " << setw(12) << "$" << price << endl;
cout << "Taxes added " << setw(6) << "$" << setprecision(2) << fixed << taxcalc << endl;
double total = price + taxcalc;
cout << "Your total is " << setw(4) << "$"  << total << endl;
cout << endl;
}
return 0;
}