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
  cout << "Even though it has been 24 years since " << name << " was released in " << release;
  cout << " and yet still this movie has created a booming fan base that still continues to grow." << endl;
  cout << name << "is the first movie in a anthology. ";
  cout << "The first one is about a preteen boy who finds out he is a wizard and ";
  cout << "\"a famous one to boot\". He then attends a magical school for witches and wizards where he learns how to hone ";
  cout << "his control over his magical abilities."
  return 0;
}