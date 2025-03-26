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
void square_a_number_routine(); // does everything but the math
int square_a_number( int number_sq); // does the math


int main(){
    cout << "Hello from main()" << endl;
    show_message(); //call the function
    square_a_number_routine();
    




    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
    }

    // Define functions here, including full body {}
    void show_message(){
        cout << "   This is a" << endl;
    }


    void square_a_number_routine(){
        int sq;
        const int MIN_NUM = 1;
        const int MAX_NUM = 10;
        cout << "Table of Squares" << endl;
        cout << "--------------------" << endl;
        int num = MIN_NUM;
        while (num <= MAX_NUM){
            sq = square_a_number(num);
            cout << num << "\t" << sq << endl;
            /* "\t" adds a space by "hitting" tab.
            Can be repeated back to back as long as data doesn't spill over to next line*/
            num = num + 1;
        }
    }

    int square_a_number( int number_sq) {
        int answer;
        //cout << "doing the math for " << number_sq << " ... " ;
        answer = number_sq * number_sq;
        return answer;
    }