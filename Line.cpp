#include <iostream>
#include "HeaderFiles\Line.h"
#include "HeaderFiles\Point.h"
#include "HeaderFiles\Shape.h"
#include "HeaderFiles\FileWrite.h"
using namespace std;

Line::Line() : a(Point(0, 0)), b(Point(0, 0)){}


Line::Line(Point a, Point b) : a(a), b(b){}

void Line::Createline()
{
    cout << "This is a Line at (" << a.x << ", " << a.y << " and " << b.x << ", " << b.y << ")" << endl;
}

void Line::draw(const std::string& data)
{
    cout << "Creating a line!" << endl;
    FileWrite writeData(data);
}

Line::~Line(){}
