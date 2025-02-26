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
double num_grade;          // 0-100
cout << setprecision(2) << fixed << showpoint;
string letter_grade;     // "A","B", etc.
const double A_PLUS = 100.00;
const double A = 89.50;
const double B = 79.50;
const double C = 69.50;
const double D = 59.50;
const double F = 0.00;

// ask for the number grade
cout << "Number grade to letter grade conversion program." << endl;
cout << "Enter the number grade: ";
cin >> num_grade;
// find the letter grade
// tell user the answer
if (num_grade >= A_PLUS){
    letter_grade = "A+";
}
if (num_grade >= A && num_grade < A_PLUS){
    letter_grade = "A";
}
if (num_grade >= B && num_grade < A){
    letter_grade = "B";
}
if (num_grade >= C && num_grade < B){
    letter_grade = "C";
}
if (num_grade >= D && num_grade < C){
    letter_grade = "D";
}
if (num_grade >= F && num_grade < D){
    letter_grade = "F";
}
cout << "The letter grade is " << letter_grade << "." << endl;


cout << endl;
cout << endl;
cout << endl;

return 0;
}