// CSC 134
// M3HW1
// vinecal4701 (B. Vineyard)
// 03/xx/2025

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

void question_1();
void question_2();
void question_3();
void question_4();

int main()
{
// beginning of the main() method

    // this program will ask a question and respond to it with
    // the program for the given question.
    bool keep_going = true;
    while (true == keep_going){

    int choice;

    cout << "What question's program would you like to run?" << endl;
    cout << "Please type a number between 1 and 4 or type 0 at this line to exit: \n";
    cin >> choice;

    //This section will cause some kind of crash but not showing the errors
      // if the void() functions don't have at least an empty curlly braced part below the end of the int main() to try an call on.

    if (1 == choice){
        question_1();
    }
    else if (2 == choice){
        question_2();
    }
    else if (3 == choice){
        question_3();
    }
    else if (4 == choice){
        question_4();
    }
    else if (0 == choice){
        cout << "Goodbye!" << endl;
        cout << endl;
        cout << endl;
        return 0;
    }
    else if (choice != 0,1,2,3,4){
        cout << "I'm sorry that is not a valid choice." << endl;
        cout << endl;
    }
    
    }

return 0;
}






// Function for Question 1
void question_1(){
    string choice;

cout << "Hello, I'm Chatbot B! Do you like anime?" << endl;
cin >> choice;

if ("yes" == choice){
    cout << "That's awesome! I do too!" << endl;
    cout << endl;
}
else if ("no" == choice){
    cout << "Well, maybe you haven't found the one for you yet." << endl;
    cout << endl;
}
else if ("yes" != choice or "no" != choice){
    cout << "If you aren't sure that is ok." << endl;
    cout << endl;
}

}
// end question 1





// Function for Question 2
void question_2(){
        
//This program will calculate and print a bill receipt
string choice;
double price = 5.99;
double tax = 0.08;
double tip = 0.15;
cout << "Hello, are you [dining] in or [carrying] out?" << endl;
cin >> choice;
cout << endl;

if ("dining" == choice){
    //cout << "The price is " /*<< setw(12)*/ << "$" << price << endl;
    cout << "The tax is 8%." << endl;
double taxcalc = price * tax;
cout << "A 15% tip will be added to your order since you are dining in." << endl;

//this will print the total after taxes
double tipcalc = price * tip;
cout << "Price " << setw(12) << "$" << price << endl;
cout << "Tip " << setw(14) << setprecision(2) << fixed << "$" << tipcalc << endl;
cout << "Taxes added " << setw(6) << "$" << setprecision(2) << fixed << taxcalc << endl;
double total = price + taxcalc + tipcalc;
cout << "Your total is " << setw(4) << "$"  << total << endl;
cout << endl;
}
else if ("carrying" == choice){
    //cout << "The price is " /*<< setw(12)*/ << "$" << price << endl;
    cout << "The tax is 8%." << endl;
double taxcalc = price * tax;

//this will print the total after taxes
cout << "Price " << setw(12) << "$" << price << endl;
cout << "Taxes added " << setw(6) << "$" << setprecision(2) << fixed << taxcalc << endl;
double total = price + taxcalc;
cout << "Your total is " << setw(4) << "$"  << total << endl;
cout << endl;
}

}
// end question 2







// Function for Question 3
void question_3(){
    bool keep_going = true;
    while (true == keep_going){  
            
    int choice;
    string game_over ("Thank you for playing!");

    cout << "Welcome to my simple choose your own adventure game!" << endl;
    cout << "We begin with your character standing at the mouth of a great cave. Please choose between choice [1] (enter the cave) or choice [2] (walk away to begin). You may also choose [0] to end the program." << endl;
    cin >> choice;


    if ( 1 == choice) {
        cout << "You choose to enter the cave and explore. " << endl;
        cout << "You come upon a split in the tunnel. Choose [1] for left or [2] for right." << endl;
        cin >> choice;

        if ( 1 == choice){
            cout << "You chose to venture down the left tunnel and come upon a large cavern. On a raised rock in the middle there is a chest." << endl;
            cout << "Do you approach [1] or look around for traps [2]?" << endl;
            cin >> choice;

            if ( 1 == choice){
                cout << "You start to approach the chest and activate a pressure plate controlled spike which impales you." << endl;
                cout << game_over << endl;
                cout << endl;
        cout << endl;
        cout << endl;
            }
            else if (2 == choice){
                cout << "You look around for traps and manage to avoid the hidden pressure plate spikes." << endl;
                cout << "You now stand in front of the chest. Open it [1] or walk away [2]?" << endl;
                cin >> choice;

                if (1 == choice){
                    cout << "You reach out to open the chest and upon touching it the chest turns into a mimic and devourers you." << endl;
                    cout << game_over << endl;
                    cout << endl;
        cout << endl;
        cout << endl;
                }
                else if (2 == choice){
                    cout << "You turn to walk away and accidentallty activate a trip wire you had stepped over." << endl;
                    cout << "You died from a poison dart. " << game_over << endl;
                    cout << endl;
        cout << endl;
        cout << endl;
                }
            }
        }
        else if (2 == choice){
            cout << "You chose to venture down the right tunnel and the ceiling collapsed on you." << endl;
            cout << game_over << endl;
            cout << endl;
        cout << endl;
        cout << endl;
        }
    }
    else if ( 2 == choice) {
        cout << "You choose to walk away and go on about your life never knowing what treasures or horrors awaited you in that cave." << endl;
        cout << game_over << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }
    else if (0 == choice){
        cout << "Goodbye!" << endl;
        cout << endl;
        cout << endl;
        return 0;
    }
    else if ( 0,1,2 != choice) {
        cout << "That is and invalid choice. please try again." << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }
}
return 0;
}
// end question 3






// Function for Question 4
void question_4(){
    cout << "Question 4 goes here" << endl;
}
// end question 4
