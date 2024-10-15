#include <iostream>
#include "HeaderFiles\Rectangle.h"
#include "HeaderFiles\Point.h"
#include "HeaderFiles\FileWrite.h"

using namespace std;

Rectangle::Rectangle() : p1(Point(0, 0)), length(0), breadth(0)
{
}

Rectangle::Rectangle(Point p1, double length, double breadth) : p1(p1), length(length), breadth(breadth)
{
}

void Rectangle::draw(const std::string& data)
{
    cout << "Creating a rectangle!" << endl;
    FileWrite writeData(data);
}

void Rectangle::CreateRectangle()
{
    cout << "This Rectangle is created" << endl;
}

Rectangle::~Rectangle(){}
