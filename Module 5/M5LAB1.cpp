#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
B. Vineyard
03/31/2025
This template serves as a starting point
for your own program. We'll be using
void functions to tell a simple story,
where the user gets to make choices.

You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
    void choice_search_for_key();
    void choice_pick_lock();
    void choice_house();
    void choice_traps();
void choice_go_home();
// TODO: add more choices here

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    cout << endl;
    choice_front_door();
  } else if (2 == choice) {
    cout << endl;
    choice_back_door();// call choice 2 here
  } else if (3 == choice) {
    cout << endl;
    choice_go_home();// call choice 3 here
  } else if (4 == choice) {
    cout << endl;
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << endl;
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Search for a key" << endl;
  cout << "3. Pick lock" << endl;
  cout << "4. Give up and go home" << endl;
  cout << "5. Quit" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } 
  else if (2 == choice) {
    choice_search_for_key();
  }
  else if (3 == choice) {
    choice_pick_lock();
  }
  else if (4 == choice) {
    choice_go_home();
  }
  else if (5 == choice) {
    return;
  }
  else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_front_door();  // try again
  }
}

void choice_back_door() { cout << "You sneak around the back and find the back door unlocked." << endl; 
    cout << "Do you:" << endl;
    cout << "1. Enter the house?" << endl;
    cout << "2. Check for traps?" << endl;
    cout << "3. Forget it, and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";
    int choice;
    cin >> choice;
    if (1 == choice) {
        cout << endl;
      choice_house();
    } else if (2 == choice) {
      choice_traps();// call choice 2 here
    } else if (3 == choice) {
      choice_go_home();// call choice 3 here
    } else if (4 == choice) {
      cout << "Ok, quitting game" << endl;
      return; // go back to main()
    } else {
      cout << "That's not a valid choice, please try again." << endl;
      cin.ignore(); // clear the user input
      choice_back_door();  // try again
    }



}

void choice_go_home() { 
    cout << "You start to walk away and are grabbed by someone in a blacked out van. You are never heard from again." << endl;
    return; // go back to main()
    
}

// any new choices go here
void choice_search_for_key(){
    cout << "You search for a key under the door mat and find one." << endl;
    cout << "Do you:" << endl;
    cout << "1. Enter the house?" << endl;
    cout << "2. Check for traps?" << endl;
    cout << "3. Forget it, and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";
    int choice;
    cin >> choice;
    if (1 == choice) {
        cout << endl;
      choice_house();
    } 
    else if (2 == choice) {
        cout << endl;
        choice_traps();// call choice 2 here
    } 
    else if (3 == choice) {
        cout << endl;
        choice_go_home();// call choice 3 here
    } 
    else if (4 == choice) {
        cout << endl;
        cout << "Ok, quitting game" << endl;
      return; // go back to main()
    } 
    else {
        cout << endl;
        cout << "That's not a valid choice, please try again." << endl;
      cin.ignore(); // clear the user input
      choice_search_for_key();  // try again
    }
};

void choice_pick_lock(){
    cout << endl;
    cout << "You attempt to pick the lock and the police show up and arrest you." << endl;
    cout << endl;
    return;
    };

void choice_house(){
    cout << endl;
    cout << "You enter the house and are killed by a swinging knife trap." << endl;
    cout << endl;
    return;
    
};

void choice_traps(){
    cout << endl;
    cout << "You check for traps before entering and discover a wire connected to a swinging kinfe trap.\nYou trip it while staying out of the way and then enter and explore without further consequence." << endl;
    return; // go back to main()
};