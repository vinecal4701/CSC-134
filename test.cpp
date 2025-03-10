#include <iostream>
using namespace std;

int main()
{  
   const double RATE = 5;
   const double INITIAL_BALANCE = 10000;
   const double TARGET = 2 * INITIAL_BALANCE;
   
   cout << "Annual contribution: " << endl;
   double contribution; 
   cin >> contribution;

   double balance = INITIAL_BALANCE;
   int year = 0;

   while (balance < TARGET){
      year++;
      //balance += contribution; // Add contribution at the beginning of the year
      double interest = balance * RATE / 100;
      balance += interest; // Add interest afterward
      balance += contribution;
      
      // Debugging: print balance after each year
      cout << "Year: " << year << ", Balance after interest: " << balance << endl;
   } 
balance = balance - contribution;
   cout << "Year: " << year << endl;
   cout << "Final Balance: " << balance << endl;

   return 0;
}