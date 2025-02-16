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
cout << "Your ending balance is:     " << final_balance << endl;
cout << endl;

return 0;
}