// CSC 134
// M2HW1 - Gold + Bonus
// vinecal4701 (Brian V.)
// 2/10/2025

#include <iostream>
#include <iomanip>
using namespace std;
  
int main()
{
// Question 1 start

//Variables
string first_name = "";
string last_name = "";
string name_on_account = first_name + "" + last_name;
double starting_account_balance, deposit_amount,
 withdrawl_amount, final_balance;
int account_number
// figure out how to limit to 8 digits
int account_number;

cout << fixed << setprecision(2);
cout << "What is the name on the account?" << endl;
cin >> first_name;
cin >> last_name;

cout << "What is the starting account balance?\n";
cin >> starting_account_balance;

cout << "What is the amount you would like to deposit?" << endl;
cin >> deposit_amount;

cout << "What is the amount you would like to withdrawl?" << endl;
cin >> withdrawl_amount;

cout << name_on_account << endl;
cout << account_number;
final_balance = starting_account_balance + deposit_amount - withdrawl_amount;
cout << final_balance
return 0;
}