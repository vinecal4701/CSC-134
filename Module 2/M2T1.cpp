// CSC 134
// M2T1
// vinecal4701 (B. Vineyard)
// 1/27/2025

#include <iostream>
#include <iomanip>

using namespace std;
  
int main()
{
// This program will simulate an apple orchard.
// and will ask for the user's name and how many apples they want
// only charge them for that number

// The owner’s farm_name
string farm_name = "Brian V.";
// number of apples owned
int apples = 400;

// sets decimal place for all doubles to 2
cout << setprecision(2) << fixed;

// price per apple
double pricePerApple = 1.50;

// asks for the users name and how many apples they want
string user_name;
int apples_to_buy;

// Greet customer
cout << "Good day! What is your name?" << endl;
cin >> user_name;

// print all the information about the orchard
  cout << "Welcome to " << farm_name;
  cout << "’s apple orchard " << user_name << "!" << endl;
  cout << "We have " << apples;
  cout << " apples in stock." << endl;
  cout << "Apples are currently $";
  cout << pricePerApple << " each." << endl;
    
// calculate the total price of the apples they requested
  cout << "How many apples would you like to buy?" << endl;
  cin >> apples_to_buy;
  double totalPrice = apples_to_buy * pricePerApple; 
  cout << "Your total is $" << totalPrice << endl;
  cout << "Thank you for your bussiness, " << user_name << ". Have a great day!" << endl;
  cout << endl;

  return 0;
}