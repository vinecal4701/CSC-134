// CSC 134
// M3LAB1 -Choices
// vinecal4701 (B. Vineyard)
// 2/xx/2025

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
// beginning of the main() method
  
    // this program will ask a question and respond to it.
    // You should run it, and test it by typing in different values.
    // Example test values: 1, 2, 3, banana (try all of them)
  
    // declare the variable we need
    int choice; 
  
    // ask the question
    cout << "You're faced with fighting a dragon. Which option will you choose?" << endl;
    cout << "Type 1 for Fight or 2 for Flee: "; 
    cin >> choice;
  
    // using if, make a decision based on the user's choice
  
    if (1 == choice) {
        cout << "You chose to Fight." << endl;
        
    }
    else if (2 == choice) {
        cout << "You chose to Flee." << endl;
        
    }
    else {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }
    
    
    if ( 1 == choice) {
        cout << "Which option will you choose to use in the Fight?" << endl;
        cout << "1-Enchanted Bow of Fire, 2-Sword of Soul Steal, 3-Spell of instant freeze?" << endl;
        cin >> choice;
        if (1 == choice){
            cout << "No affect. You were eaten." << endl;
        }
        else if (2 == choice){
            cout << "The sword attempted to steal the dragon's soul but was unsuccesful." << endl;
            cout << "You were scorched to death!" << endl;
        }
        else if (3 == choice) {
            cout << "The spell froze the dragon to it's core." << endl;
            cout << "You survived!" << endl;
        }
        else{
            cout << "I'm sorry, that is not a valid choice." << endl; 
        }
    }
    else if (2 == choice) {
        cout << "Which option will you choose to Flee?" << endl;
        cout << "1-Run into the thick woods, 2-Run into the small cave opening, 3-Use invisibilty potion and run away?" << endl;
        cin >> choice;
        if (1 == choice){
            cout << "The dragon burned the forest with you in it." << endl;
        }
        else if (2 == choice){
            cout << "The cave was a dead end. The dragon blew fire into the cave." << endl;
            cout << "You were scorched to death!" << endl;
        }
        else if (3 == choice) {
            cout << "The potion turned you invisible and you were able to escape." << endl;
            cout << "You survived!" << endl;
        }
        else{
            cout << "I'm sorry, that is not a valid choice." << endl; 
        }
    }
    else{
        cout << "I'm sorry, that is not a valid choice." << endl;
    }
    

    // finish up
    cout << "Thanks for playing!" << endl; // this runs no matter what they choose
      
   // end of the main() method
cout << endl;
cout << endl;
cout << endl;

return 0;
}