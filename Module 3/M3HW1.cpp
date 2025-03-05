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

    //This section will cause some kind of crash but not showing the errors
      // if the void() functions don't have at least an empty curlly braced part below the end of the int main() to try an call on.

    while (choice <= 1 && choice >= 4){
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
    else if (choice < 1 && choice > 4){
        cout << "I'm sorry that is not a valid choice." << endl;
        cout << main();
    }
    
    }






cout << endl;
cout << endl;
cout << endl;

return 0;
}


void question_1(){
cout << "Question 1 goes here" << endl;
}


void question_2(){
    cout << "Question 2 goes here" << endl;
}


void question_3(){
    cout << "Question 3 goes here" << endl;
}


void question_4(){
    cout << "Question 4 goes here" << endl;
}
