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

    int choice;

    cout << "What question's program would you like to run?" << endl;
    cout << "Please type a number between 1 and 4: ";
    cin >> choice;

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
    else {
        cout << "I'm sorry that is not a valid choice." << endl;
        if ()
    }






cout << endl;
cout << endl;
cout << endl;

return 0;
}