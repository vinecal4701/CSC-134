// CSC 134
// M3LAB2 -Number Grade to Letter Grade Conversion Program
// vinecal4701 (B. Vineyard)
// 2/26/2025

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
//Define variables
int num_grade;          // 0-100
string letter_grade;     // "A","B", etc.

// ask for the number grade
cout << "Number grade to letter grade conversion program." << endl;
cout << "Enter the number grade: ";
cin >> num_grade;
// find the letter grade
// tell user the answer
cout << "The grade " << num_grade << " is a " << letter_grade << endl;


cout << endl;
cout << endl;
cout << endl;

return 0;
}