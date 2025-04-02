// CSC 134
// M5LAB2
// vinecal4701 (B. Vineyard)
// 4/02/2025

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
  
// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength(double L);
double getWidth(double W);
double getArea(double A, double L, double W);
void displayData(double length, double width, double area);



int main()
{
    // This program calculates the area of a rectangle.
	// TODO: fix any syntax errors

    double length, width, area; // The rectangle's length, width, and area

    cout << "Hello! This program will calculate the area of a rectangle using your lenth and width inputs." << endl;
    cout << endl;

    // Get the rectangle's length.
    length = getLength(length);
    // Get the rectangle's width.
    width = getWidth(width);
    cout << endl;

    // Get the rectangle's area.
    area = getArea(area,length,width);

    // Display the rectangle's data.
    displayData(length, width, area);
    
    
    
    cout << endl;
    
    return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double getLength(double L){
    cout << "Please enter the length:" << endl;
    cin >> L;
return L;
}

double getWidth(double W){
    cout << "Please enter the width:" << endl;
    cin >> W;
return W;
}

double getArea(double A, double L, double W){
    A = L * W;
return A;
}

void displayData(double length, double width, double area){
    cout << "The area of a rectangle with length " << length;
    cout << " and width " << width << " is " << area << endl;
    cout << endl;
}