#include <iostream>
#include "HeaderFiles\Circle.h"
#include "HeaderFiles\Point.h"
#include "HeaderFiles\FileWrite.h"

using namespace std;

Circle::Circle() : center(Point(0, 0)), radius(0){}

Circle::Circle(Point center, double radius) : center(center), radius(radius) {}

void Circle::CreateCircle()
{
    cout << endl;
    cout << "This circle is at (" << center.x << " " << center.y << ", " << radius << ")" << endl;
}

void Circle::draw(const std::string& data)
{
    cout << "Creating a circle!" << endl;
    FileWrite writeData(data);
}

Circle::~Circle(){}
