// CSC 134
// M1HW1
// Brian V
// 01/26/2025

#include <iostream>

using namespace std;

int main()

{
// This program will talk about a favorite movie of mine.
// The movie’s name
string name = "Harry Potter and the Sorcerer's Stone";
// Year this movie was released
int release = 2001;
// amount this movie grossed in the box office
double grossed = 3.19;
// print all the information about the movie not counting the summary
  cout << "The movie " << name;
  cout << "was released in " << release; 
  cout << " and grossed " << grossed << " million at the box office." << endl;
    
// print brief summary of movie
  cout << "We have ";
  cout << " apples in stock." << endl;
  cout << "Apples are currently $";
  cout << "If you would like to buy our entire stock of apples the total price will be $" << endl;
  return 0;
}