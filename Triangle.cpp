#include <iostream> 
#include "HeaderFiles\Triangle.h"
#include "HeaderFiles\Point.h"
#include "HeaderFiles\Shape.h"
#include "HeaderFiles\FileWrite.h"
using namespace std;

Triangle::Triangle() : p1(Point(0, 0)), p2(Point(0, 0)), p3(Point(0, 0)){}

Triangle::Triangle(Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3){}

void Triangle::CreateTriangle()
{
    cout << "This is a Triangle created" << endl;
}

void Triangle::draw(const std::string& data)
{
    cout << "Creating a triangle!" << endl;
    FileWrite writeData(data);
}

Triangle::~Triangle(){}