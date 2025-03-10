// CSC 134
// M4T1
// vinecal4701 (B. Vineyard)
// 03/10/2025

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

int main(){


//This is an example of switch() and case use
/* int choice;
cin >> choice;
switch (choice){
    case 1:
    cout << "1";
    break;
    case 2:
    cout << "2";
    break;
    default:
    cout << "none of the above.";
    break;
}*/

// This is an example of a while statement
/* int bottles;
while (bottles <= 99){
    cout << bottles << "of beer " << endl;
    bottles = bottles + 1;
} */

// Example of a while loop using bool
/* bool is_valid = false;
while (is_valid == false){
int choice;
cout << "Pick 1 or 2";
cout << endl;
cin >> choice;
if (choice == 1){
    cout << "You picked 1" << endl;
    is_valid = true;
}
else if ( choice == 2){
    cout << "You picked 2" << endl;
    is_valid = true;
}
else {
    cout << "Sorry, not valid. Try again." << endl;
}
cout << "Goodbye" << endl;
} */


// Part 1, just say "hi" five times
int count = 1;
while (count <= 5){
    cout << "Hello number " << count << endl;
    count = count + 1; // can also use count++ to replace this whole line.
}
cout << "Done!" << endl;
cout << endl;
cout << endl;
cout << endl;



// Part 2, this creates a list of numbers and their squares
/* for (int i=1; i <= 10; i++){
    cout << "Happy Mar " << i << endl;
} */
const int MIN_NUM = 1;
const int MAX_NUM = 10;
cout << "Table of Squares" << endl;
cout << "--------------------" << endl;
int num = MIN_NUM;
int sq; // num squared
while (num <= MAX_NUM){
    sq = num * num;
    cout << num << "\t" << sq << endl;
    /* "\t" adds a space by "hitting" tab.
    Can be repeated back to back as long as data doesn't spill over to next line*/
    num = num + 1;
}

cout << endl;
cout << endl;
cout << endl;
return 0;
}