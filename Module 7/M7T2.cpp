// CSC 134
// M7T2
// vinecal4701 (B. Vineyard)
// 4/30/2025


#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include "rectangle.h"
using namespace std;


// main goes here
int main()
{    

    double len, wid, area;
    cout << "Rectangle Calculations" << endl;
    cout << "Rectangle 1" << endl;
    cout << "enter width ";
    do{
        cin >> wid;
        if(wid <= 0){
        cout << "Width can not be negative. Please enter a postive value." << endl;
        cin.ignore();
        }
    }while (wid <= 0);
    cout << "enter length: ";
    do{
        cin >> len;
        if(len <= 0){
        cout << "Length can not be negative. Please enter a postive value." << endl;
        cin.ignore();
        }
    }while (len <= 0);
        

    Rectangle r1 = Rectangle();
    r1.setWidth(wid);
    r1.setLength(len);

    cout << "The area is: " << r1.getArea() << endl;




    
    cout << endl;
    
    return 0;
}