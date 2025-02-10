// CSC 134
// M2LAB1
// vinecal4701 (B. Vineyard)
// 2/10/2025

#include <iostream>
#include <iomanip>
#include <cmath>
  
using namespace std;
  
// This program is used by General Crates, Inc. to calculate
// the volume, cost, customer charge, and profit of a crate
// of any size. It calculates this data from user input, which
// consists of the dimensions of the crate.

int main()
{

// Constants for cost and amount charged
const double COST_PER_CUBIC_FOOT = 0.23;
const double CHARGE_PER_CUBIC_FOOT = 0.5;

// Variables
double length, width, height, volume, cost, charge, profit;
/* The crate's height
 The crate's length
 The crate's width
 The volume of the crate
 The cost to build the crate
 The customer charge for the crate
 The profit made on the crate */

// Set the desired output formatting for all numbers.
cout << setprecision(2) << fixed << showpoint;


// Prompt the user for the crate's length, width, and height
cout << "What are the dimensions of the crate you need made? (in feet):" << endl;
cout << "Length: ";
cin >> length;
cout << "Width: ";
cin >> width;
cout << "Height: ";
cin >> height;

/* This will calculate the crate's volume, the cost to produce it,
 the charge to the customer, and the profit.*/
volume = length * width * height;
cost = volume * COST_PER_CUBIC_FOOT;
charge = volume * CHARGE_PER_CUBIC_FOOT;
profit = charge - cost;

// This will display the calculated data.
cout << "The volume of the crate is ";
cout << volume << " cubic feet." << endl;
cout << "Cost to build:" << setw(7) << "$" << cost << endl;
cout << "Charge to customer: $" << charge << endl;
cout << "Profit:" << setw(14) << "$" << profit << endl;

return 0;
}