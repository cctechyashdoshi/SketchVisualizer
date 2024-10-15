#include <iostream>
#include "HeaderFiles\Point.h"
#include "HeaderFiles\Shape.h"
#include "HeaderFiles\FileWrite.h"
using namespace std;

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Point::CreatePoint() {
    cout << "This is a point at (" << x << ", " << y << ")" << endl;
}

Point::~Point(){}

void Point::draw(const std::string& data)
{
    cout << "Creating a point!" << endl;
    FileWrite writeData(data);
}
