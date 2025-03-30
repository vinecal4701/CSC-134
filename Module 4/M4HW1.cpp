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
int choice;   /* Had to ask Microsoft Copilot 
where to place this line as I was running into errors where
 the different functions weren't receiving the input for it. */
int main(){
    cout << "Hello! This program will calculate and display the product table of a number." << endl;
    //int choice;
    show_message();   /* Had to ask Microsoft Copilot 
    where to place this line as I was running into errors where
    the different functions weren't receiving the input for it. */
    
    bool is_valid = false;
    while (is_valid == false){
    
        
    if (choice >= 1 && choice <= 12){
        int selection = choice;
        //cout << choice;
        choice_routine(selection);
        product_of_a_number_routine();
        is_valid = true;
    }
    else {
        cout << "Sorry, not valid. Try again." << endl;
        show_message();
    }
    cout << "Goodbye" << endl;
    }



    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
    }

    // Define functions here, including full body {}
    void show_message(){
        cout << "You may choose any number between 1 and 12. Type 0 to quit." << endl;
        cin >> choice;   /* Had to ask Microsoft Copilot 
        where to place this line as I was running into errors where
        the different functions weren't receiving the input for it. */
    }


    int choice_routine(int choice){
        int selection = choice;
    return selection;
    }


    void product_of_a_number_routine(){
        int selection = choice_routine(choice);
        const int MIN_NUM = 1;
        const int MAX_NUM = 12;
        cout << "Table of Products" << endl;
        cout << "--------------------" << endl;
        int num = MIN_NUM;
        while (num <= MAX_NUM){
            int answer = product_calc(selection,num);
            cout << choice_routine(choice) << "*" << num << "= " << answer << endl;
            /* "\t" adds a space by "hitting" tab.
            Can be repeated back to back as long as data doesn't spill over to next line*/
           num = num + 1;
        }
    }

    int product_calc( int number1, int number2 ) {
        int answer;
        //cout << "doing the math for " << number_sq << " ... " ;
        answer = number1 * number2;
        return answer;
    }


    