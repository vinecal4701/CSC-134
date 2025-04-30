#ifndef RECTANGLE_H
#define RECTANGLE_H
// the two lines above and the final line,
// make sure this file is only included ONCE

// CSC 134
// M7T2
// vinecal4701 (B. Vineyard)
// 4/30/2025
// GOLD attempt


#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

class Rectangle {
    private:
        double width;
        double length;
    public:
        void setWidth(double w);
        void setLength(double len);
        // get() should never change anything, so const makes sure we don't accidentally change something
        double getWidth() const;
        double getLength() const;
        double getArea() const;
};

// implementation of class functions
void Rectangle::setWidth(double w){
    width - w;
}

void Rectangle::setLength(double len){
    length = len;
}

double Rectangle::getWidth() const{
    return width;
}

double Rectangle::getLength() const{
    return length;
}

double Rectangle::getArea() const{
    double area = width * length;
    return area;
}


#endif // RECTANGLE_H