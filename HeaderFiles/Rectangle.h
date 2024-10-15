#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h"
#include "Shape.h"
class Rectangle{
    public:
    Point p1;
    double length;
    double breadth;
    Rectangle();
    Rectangle(Point p1, double length, double breadth);
    void draw(const std::string& data);
    void CreateRectangle();

    ~Rectangle();
};

#endif
