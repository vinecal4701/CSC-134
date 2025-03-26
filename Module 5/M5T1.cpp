// CSC 134
// M5T1
// vinecal4701 (B. Vineyard)
// 03/26/2025

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;


// Purpose: show how basic functions work

// Declare functions here, so main() knows they exist
void show_message();
void greet_user(string name);
int double_a_number( int number);

// main() here
int main(){
    cout << "Hello from main()" << endl;
    show_message(); //call the function
    string user = "Brian";
    greet_user(user); //we're passing the value "Brian", not the actual variable
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int answer =double_a_number(num);
    cout << "Double that is " << answer << endl;






//done
    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
    }

    // Define functions here, including full body {}
    void show_message(){
        cout << "This is a message" << endl;
    }
    void greet_user(string name){
        cout << "Hello, " << name << endl;
    }
    int double_a_number(int number){
        int answer =number * 2;
        return answer; //must return an int
    }