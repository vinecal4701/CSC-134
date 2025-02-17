// CSC 134
// M3T1 and M3T2
// vinecal4701 (B. Vineyard)
// 2/XX/2025

#include <iostream>
#include <iomanip>
#include <cmath>
  
using namespace std;

int main()
{
// Start M3T1

cout << "Start M3T1" << endl;
cout << endl;
cout << endl;
cout << endl;
// Variables
/* The crate's height
 The crate's length
 The crate's width
 The area of the crate
 */
 double length1, length2, width1, width2, area1, area2; 


// Set the desired output formatting for all numbers.
cout << setprecision(2) << fixed << showpoint;


// Prompt the user for the crate's length, width, and height
cout << "What are the length and width of the rectangles?:" << endl;
cout << "Length of first rectangle: ";
cin >> length1;
cout << "Width of first rectangle: ";
cin >> width1;
cout << "Length of second rectangle: ";
cin >> length2;
cout << "Width of second rectangle: ";
cin >> width2;


/* This will calculate the two rectangles area, 
both seperately and combined*/
area1 = length1 * width1;
area2 = length2 * width2;
double total_area = area1 + area2;


// This will display the calculated data.
cout << "The area of the first rectangle is ";
cout << "" << area1 << endl;
cout << "The area of the second rectangle is ";
cout << "" << area2 << endl;
cout << "The total area of both rectangles combined is ";
cout << "" << total_area << endl;

cout << "End M3T1" << endl;
cout << endl;
cout << endl;
cout << "--------------------------------------" << endl;
cout << endl;
cout << endl;

// Start M3T2
cout << "Start M2T2" << endl;
cout << endl;
cout << endl;
cout << endl;


if (area1 > area2) {
    cout << "The first one is larger" << endl;

}
else if (area2 > area1) {
    cout << "The second one is larger" << endl;
}
else {
    cout << "The rectangles have the same area" << endl;
}

cout << endl;
cout << "End M3T2" << endl;
cout << endl;
cout << endl;
cout << endl;
return 0;
}