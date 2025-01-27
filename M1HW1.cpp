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
string name = "\033[3mHarry Potter and the Sorcerer's Stone\033[0m";
// Year this movie was released
int release = 2001;
// amount this movie grossed in the box office
double grossed = 3.19;
// print all the information about the movie not counting the summary
  cout << "The movie " << name;
  cout << " was released in " << release; 
  cout << " and grossed " << grossed << " million at the box office." << endl;
    
// print brief summary of movie
  cout << "Even though it has been 24 years since " << name << " was released in " << release;
  cout << " it has still created a booming fan base that is ever growing." << endl;
  cout << name << " is the first movie in an anthology. ";
  cout << "This first one is about a preteen boy who finds out he is a wizard and ";
  cout << "\"a famous one to boot\"." << endl;
  cout << "He then attends a magical school for witches and wizards where he learns how to hone ";
  cout << "his control over his magical abilities." << endl;
  cout << "One of my favorite quotes is from a character by the name of Ron who shouts \"Eat slugs!\"";
  cout << " when attempting to hit Draco Malfoy with a temporary curse that would make him vomit slugs. ";
  cout << "This was in retaliation for Draco calling his friend a deragatory name in the magical world." << endl;

  return 0;
}