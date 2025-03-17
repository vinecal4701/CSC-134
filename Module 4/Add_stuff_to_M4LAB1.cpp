// CSC 134
// M4LAB1
// vinecal4701 (B. Vineyard)
// 03/17/2025

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

int main(){
    // New info discovered:
    // any regular character can be char
    // but Unicode characters have to be strings
    string first_emoji = "🍀";
    string second_emoji = "🎩"; //use any one character or an emoji
    int width = 8;
    int height = 5;
    cout << "What height would you like this table to be?" << endl;
    cin >> height;
    cout << "What width would you like?" << endl;
    cin >> width;
    cout << "What Unicode Emojis would you like to use? You may enter two." << endl;
    cin >> first_emoji >> second_emoji;
    cout << endl;
    cout << endl;


    // cout << first_emoji << endl;

    // three ways to run a loop
    // 1. while loop
    int count = 0;
    while (count < 5){
        cout << first_emoji << second_emoji << " ";
        count++;
    }
    
    cout << endl;

    // 2. do while loop
    count = 0;
    do {
        cout << first_emoji << second_emoji << " ";
        count++;
    } while (count < 5);

    // 3. for loop
    // This is the one time using i as a variable name is ok
    // i stands for index
    cout << endl;
    cout << first_emoji << " printed horizontally" << endl;
    for (int i = 0; i < width; i++) {
        cout << first_emoji << second_emoji << " ";
    }
    cout << endl;
    cout << first_emoji << " printed vertically" << endl;
    for (int i = 0; i < height; i++) {
        cout << first_emoji << second_emoji << endl;
    }
    cout << endl << " Print a box " << width << " by " << height << endl;
    // this is a nested loop
    // for each row
    for (int h = 0; h < height; h++) {
        //print the current row
        for ( int w = 0; w < width; w++) {
            cout << first_emoji << second_emoji << " ";
        }
        cout << endl;
    }
    // just for fun: extra user validation
    int w, h; // both must be > 0
    bool good_input = false;
    do {
        cout << "Enter width: ";
        cin >> w;
        cout << "Enter height: ";
        cin >> h;
        if ( w > 0 && h > 0) {
            good_input = true;
        }
        else {
            cout << "Please enter nonzero width and height" << endl;
        }
    } while (good_input ==false); // repeat until we have valid data
    cout << "Printing a box " << w << " by " << h << endl;
    for ( int down=0; down<h; down++) {
        cout << endl;
        for ( int right=0; right<w; right++) {
            cout << first_emoji << second_emoji;
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
    }