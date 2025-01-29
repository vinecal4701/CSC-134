// CSC 134
// M2T1
// vinecal4701 (B. Vineyard)
// 1/27/2025

#include <iostream>
  
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
// price per apple
double pricePerApple = 1.45;

string user_name;
int apples_to_buy;


// calculate the total price of the apples
  double totalPrice = apples * pricePerApple;

// Greet customer
cout << "Good day! What is your name?";
cin >> user_name;

// print all the information about the orchard
  cout << "Welcome to " << farm_name;
  cout << "’s apple orchard." << endl;
  cout << "We have " << apples;
  cout << " apples in stock." << endl;
  cout << "Apples are currently $";
  cout << pricePerApple << " each." << endl;
  cout << "If you would like to buy our entire stock of apples the total price will be $" << totalPrice << "." << endl;
  cout << "Thank you for your bussiness, " << user_name << "!" << endl;

  cout << "How many apples would you like to buy?";
  cin >> apples_to_buy;
  double totalPrice = apples_to_buy * pricePerApple; 
  cout << totalPrice

  return 0;
}