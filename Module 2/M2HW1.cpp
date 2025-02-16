// CSC 134
// M2HW1 - Gold + Bonus
// vinecal4701 (Brian V.)
// 2/10/2025

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
  
int main()
{

// Question 1 start
cout << "Question 1" << endl;
cout << endl;
cout << endl;
cout << endl;

//Variables
string first_name = "";
string last_name = "";

double starting_account_balance, deposit_amount,
 withdrawl_amount, final_balance;
int account_number = 25468739;


cout << fixed << setprecision(2);
cout << "What is the name on the account?" << endl;
cin >> first_name;
cin >> last_name;
cout << endl;

cout << "What is the starting account balance?\n";
cout << "$";
cin >> starting_account_balance;
cout << endl;

cout << "What is the amount you would like to deposit?" << endl;
cout << "$";
cin >> deposit_amount;
cout << endl;

cout << "What is the amount you would like to withdrawl?" << endl;
cout << "$";
cin >> withdrawl_amount;
cout << endl;

string name_on_account = first_name + " " + last_name;
cout << "The name on the account is: " << name_on_account << endl;
cout << "Your account number is:     " << account_number << endl;
final_balance = starting_account_balance + deposit_amount - withdrawl_amount;
cout << "Your ending balance is:     $" << final_balance << endl;
cout << endl;

//End question 1

cout << endl;
cout << endl;
cout << "----------------------------------------------------------------------------------------------" << endl;
cout << endl;
cout << endl;

// Question 2 start
cout << "Question 2" << endl;
cout << endl;
cout << endl;
cout << endl;

// This program is used by General Crates, Inc. to calculate
// the volume, cost, customer charge, and profit of a crate
// of any size. It calculates this data from user input, which
// consists of the dimensions of the crate.

/* Constants for cost and amount charged have been raised
to highest allowed from our research. Any higher and we may
lose customers. */
const double COST_PER_CUBIC_FOOT = 0.30;
const double CHARGE_PER_CUBIC_FOOT = 0.52;

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

// End Question 2

cout << endl;
cout << endl;
cout << "----------------------------------------------------------------------------------------------" << endl;
cout << endl;
cout << endl;

// Question 3 start

/* This program will determine how many pizza slices are left over
after a pizza party. It will ask how mayn pizzas are being ordered,
how many slices per pizza are requested, and how many people are coming.
*/

cout << "Question 3" << endl;
cout << endl;
cout << endl;
cout << endl;

int pizzas, slices_per_pizza, visitors;

cout << "Congratulations on your pizza party!\n";
cout << "How many pizzas would you like to order?\n";
cin >> pizzas;
cout << endl;

cout << "How many slices would you like per pizza?\n";
cin >> slices_per_pizza;
cout << endl;

cout << "How many visitors will be in attendance?\n";
cin >> visitors;
cout << endl;

/* This section will calculate how many total slices there will be
and how many slices are needed for each visitor to have 3.*/
int slices_total = pizzas * slices_per_pizza;
int slices_needed = visitors * 3;
cout << "The total number of slices for your " << pizzas << " pizzas is: \n";
cout << slices_total << endl;
cout << endl;

cout << "The total number of slices you would need to feed " << visitors
<< " visitors is: \n" << slices_needed << endl;
cout << endl;

int number_of_left_over_slices = slices_total - slices_needed;
cout << "You will have " << number_of_left_over_slices << " slices left over.\n";
cout << endl;

cout << "If your number of slices left over is below 0 please do one or both of the following to ensure all visitors get an equal number of slices:\n";
cout << " -increase the number of pizzas you are ordering\n -increase the number of slices per pizza.\n";

// End Question 3

cout << endl;
cout << endl;
cout << "----------------------------------------------------------------------------------------------" << endl;
cout << endl;
cout << endl;

// Start Question 4

cout << "Question 4" << endl;
cout << endl;
cout << endl;
cout << endl;


return 0;
}