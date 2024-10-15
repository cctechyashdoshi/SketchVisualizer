#include <iostream>
#include "HeaderFiles\Square.h"
#include "HeaderFiles\Point.h"
#include "HeaderFiles\Shape.h"
#include "HeaderFiles\FileWrite.h"
using namespace std;

Square::Square() : p1(Point(0, 0)), length(0){}

Square::Square(Point p1, double length) : p1(p1), length(length){}

void Square::CreateSquare()
{
    cout << "This is a Square created" << endl;
}

void Square::draw(const std::string& data)
{
    cout << "Creating a square!" << endl;
    FileWrite writeData(data);
}

Square::~Square(){}
