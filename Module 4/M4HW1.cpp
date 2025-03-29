// CSC 134
// M5T2
// vinecal4701 (B. Vineyard)
// 03/26/2025

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;



void show_message();
void product_of_a_number_routine(); // does everything but the math
int choice_routine(int choice);
int product_calc( int number1, int number2); // does the math

int main(){
   // cout << "Hello from main()" << endl;
    //show_message(); //call the function
    //square_a_number_routine();
    cout << "Hello! This program will calculate and display the product table of a number." << endl;
    bool is_valid = false;
    while (is_valid == false){
    int choice;
    //show_message();
    cin >> choice;
    int selection = choice;
    //choice_routine(selection);
    if (choice >= 1 && choice <= 12){
        cout << choice;
        product_of_a_number_routine(choice);
        is_valid = true;
    }
    else {
        cout << "Sorry, not valid. Try again." << endl;
    }
    cout << "Goodbye" << endl;
    }



    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
    }
/*
    // Define functions here, including full body {}
    void show_message(){
        cout << "You may choose any number between 1 and 12." << endl;
    }


    int choice_routine(int choice){
        int selection;
        cin >> selection;
return selection;
    }


    void product_of_a_number_routine(){
        int answer;
        const int MIN_NUM = 1;
        const int MAX_NUM = 60;
        cout << "Table of Products" << endl;
        cout << "--------------------" << endl;
        int num = MIN_NUM;
        while (num <= MAX_NUM){
            answer = product_calc();
            cout << choice_routine() << "*" << num << "= " << answer << endl;
            /* "\t" adds a space by "hitting" tab.
            Can be repeated back to back as long as data doesn't spill over to next line*/
           /* num = num + 1;
        }
    }

    int product_calc( int number1, int number2 ) {
        int answer;
        //cout << "doing the math for " << number_sq << " ... " ;
        answer = number1 * number2;
        return answer;
    }


    */