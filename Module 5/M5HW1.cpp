// CSC 134
// M5HW1
// vinecal4701 (B. Vineyard)
// 4/xx/2025


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void question1();
void question2();
void question3();
void question4();
void question5();
void main_menu();

int main()
{
    main_menu();

    cout << "Goodbye!" << endl;
    cout << endl;
    
    return 0;
}



void main_menu() {
    // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
    cout << "Main Menu" << endl;
    cout << "Which question program would you like to run?" << endl;
    cout << "Question [1]." << endl;
    cout << "Question [2]." << endl;
    cout << "Question [3]." << endl;
    cout << "Question [4]." << endl;
    cout << "Question [5]." << endl;
    cout << "Quit [6]" << endl;
    cout << "Choose: \n";
    int choice;
    cin >> choice;
    if (1 == choice) {
      cout << endl;
      question1();
    } 
    else if (2 == choice) {
      cout << endl;
      question2();// call choice 2 here
    } 
    else if (3 == choice) {
      cout << endl;
      question3();// call choice 3 here
    } 
    else if (4 == choice) {
        cout << endl;
        question4();// call choice 3 here
      } 
    else if (5 == choice) {
        cout << endl;
        question5();// call choice 3 here
      } 
      
    else if (6 == choice) {
      cout << endl;
      cout << "Ok, quitting" << endl;
      return; // go back to main()
    } 
    else {
      cout << endl;
      cout << "That's not a valid choice, please try again." << endl;
      cin.ignore(); // clear the user input
      main_menu();  // try again
    }
}


void question1(){
    string month1 = "";
    string month2 = "";
    string month3 = "";
    double rainfall1 = 0;
    double rainfall2 = 0;
    double rainfall3 = 0;
    double average_rainfall;


    cout << "This program will display the average rainfall in inches for";
    cout << "the three months you provide." << endl;
    cout << "What is your first month?" << endl;
    cin >> month1;
    cout << "What is the rainfall in inches for that month?" << endl;
    cin >> rainfall1;
    cout << "What is your second month?" << endl;
    cin >> month2;
    cout << "What is the rainfall in inches for that month?" << endl;
    cin >> rainfall2;
    cout << "What is your third month?" << endl;
    cin >> month3;
    cout << "What is the rainfall in inches for that month?" << endl;
    cin >> rainfall3;
    average_rainfall = (rainfall1 + rainfall2 + rainfall3) / 3.0;
    cout << "The average rainfall for " << month1 << ", " << month2 << ", " << month3;
    cout << " is " << setprecision(3) << average_rainfall << " inches." << endl;

    cout << endl;
    main_menu();
}

void question2(){
    cout << "fill" << endl;
    cout << endl;
    main_menu();
}

void question3(){
    cout << "fill" << endl;
    cout << endl;
    main_menu();
}

void question4(){
    cout << "fill" << endl;
    cout << endl;
    main_menu();
}

void question5(){
    cout << "fill" << endl;
    cout << endl;
    main_menu();
}