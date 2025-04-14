// CSC 134
// M5HW1 - Gold
// vinecal4701 (B. Vineyard)
// 4/13/2025


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
    cout << " the three months you provide." << endl;
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
  double length, width, height, volume; 


  // Set the desired output formatting for all numbers.
  cout << setprecision(2) << fixed << showpoint;
  
  
  // Prompt the user for the crate's length, width, and height
  cout << "What are the length, width, and height, in inches, of the block?:" << endl;
  cout << "What is the length of the block?";
  cout << endl;
  do{
    cin >> length;
    if(length <= 0){
      cout << "Invalid input.";
      cout << endl;
      cin.ignore(); // clear the user input
    }
  }while(length <= 0);
  
  cout << "What is the width of the block?";
  cout << endl;
  do{
    cin >> width;
    if(width <= 0){
      cout << "Invalid input.";
      cout << endl;
      cin.ignore(); // clear the user input
    }
  }while(width <= 0);
  
  cout << "What is the height of the block?";
  cout << endl;
  do{
    cin >> height;
    if(height <= 0){
      cout << "Invalid input.";
      cout << endl;
      cin.ignore(); // clear the user input
    }
  }while(height <= 0);
  
  
  
  // This will calculate the volume 

  volume = length * width * height;
  cout << "The volume of your block is " << volume << " in\u00b3" << endl;
  cout << endl;
  main_menu();
}

void question3(){
    int choice;
    cout << "This will convert any number between 1 and 10";
    cout << " to the Roman numeral equivalent." << endl;
    cout << "Please enter a number (1-10):";
    do{
      cin >> choice;
      if(choice < 1 || choice > 10){
        cout << "Invalid input.";
        cout << endl;
        cin.ignore(); // clear the user input
      }
    }while(choice < 1 || choice > 10);
    switch (choice) {
      case 1: 
          cout << "The Roman numeral for 1 is I" << endl;
          break;
      case 2: 
          cout << "The Roman numeral for 2 is II" << endl;
          break;
      case 3: 
          cout << "The Roman numeral for 3 is III" << endl;
          break;
      case 4: 
          cout << "The Roman numeral for 4 is IV" << endl;
          break;
      case 5: 
          cout << "The Roman numeral for 5 is V" << endl;
          break;
      case 6: 
          cout << "The Roman numeral for 6 is VI" << endl;
          break;
      case 7: 
          cout << "The Roman numeral for 7 is VII" << endl;
          break;
      case 8: 
          cout << "The Roman numeral for 8 is VIII" << endl;
          break;
      case 9: 
          cout << "The Roman numeral for 9 is IX" << endl;
          break;
      case 10: 
          cout << "The Roman numeral for 10 is X" << endl;
          break;
  }
    cout << endl;
    main_menu();
}

void question4(){
  cout << setprecision(3) << fixed << showpoint;

  cout << "Geometry Calculator" << endl;
  cout << "[1] Calculate the Area of a Circle." << endl;
  cout << "[2] Calculate the Area of a Rectangle." << endl;
  cout << "[3] Calculate the Area of a Triangle." << endl;
  cout << "[4] Quit." << endl;
  cout << "Enter your choice (1-4): \n";
  int choice;
  double circle_radius, rectangle_length, rectangle_width, triangle_base, triangle_height, area;

  do{
  cin >> choice;
  if (1 == choice) {
    cout << "Please enter the radius of the Circle." << endl;
    do{
      cin >> circle_radius;
       if(circle_radius <= 0){
        cout << "The radius cannot be less than or equal to zero." << endl;
        cin.ignore(); // clear the user input
        }
      }while(circle_radius <= 0);
      area = 3.14159 * (pow(circle_radius, 2));
      cout << "The area of your circle is " << area << endl;
      cout << endl;
      question4();
  } 
  else if (2 == choice) {
    cout << "Please enter the length and width of the Rectangle." << endl;
    do{
      cout << "Length:";
      cin >> rectangle_length;
      cout << "Width:";
      cin >> rectangle_width;
       if(rectangle_length <= 0 && rectangle_width <= 0){
        cout << "The length and/or width cannot be less than or equal to zero." << endl;
        cin.ignore(); // clear the user input
        }
      }while(rectangle_length <= 0 && rectangle_width <= 0);
      area = rectangle_length * rectangle_width;
      cout << "The area of your rectangle is " << area << endl;
      cout << endl;
      question4();
  } 
  else if (3 == choice) {
    cout << "Please enter the length of your triangle's base and the height of the Triangle." << endl;
    do{
      cout << "Length of base:" << endl;
      cin >> triangle_base;
      cout << "Height:" << endl;
      cin >> triangle_height;
       if(triangle_base <= 0 && triangle_height <= 0){
        cout << "The length and/or height cannot be less than or equal to zero." << endl;
        cin.ignore(); // clear the user input
        }
      }while(triangle_base <= 0 && triangle_height <= 0);
      area = (triangle_base * triangle_height) * 0.5;
      cout << "The area of your triangle is " << area << endl;
      cout << endl;
      question4();
  } 
  else if (4 == choice) {
      cout << "Quitting." << endl;
      cout << endl;
      main_menu();      
    } 
  else {
    //cout << endl;
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
  }
  }while(choice != 4);
    //cout << endl;
   // main_menu();
}

void question5(){
    double speed, hours, distance;
    cout << setprecision(2) << fixed << showpoint;
    do{
    cout << "This program will calculate the distance traveled and";
    cout << " in how many hours based upon your input.";
    cout << " Entering [-5] will exit and return to the main menu." << endl;
    cout << "What is the speed of your vehicle in mph?" << endl;
    do{
      cin >> speed;
    if(speed == -5){
      main_menu();
     } 
    else if(speed < 0){
      cout << "Invalid input. Speed may not be less than 0. Please try again." << endl;
      cin.ignore();
     }
    }while(speed <0);

    do{
      cout << "How many hours has it traveled?" << endl;
    cin >> hours;
    if(hours == -5){
      main_menu();
     } 
    else if(hours < 1){
      cout << "Invalid input. Hours may not be less than 1. Please try again." << endl;
      cin.ignore();
     } 
    }while(hours < 1);

     cout << "Hour \tDistance Traveled" << endl;
     cout << "---------------------------------------------" << endl;
      for(double t = 1; t <= hours; t++){
        distance = speed * t;
        cout << setw(2) << t << setw(15) << distance << endl;
      }
    }while(speed != -5 || hours != -5);

    main_menu();
}