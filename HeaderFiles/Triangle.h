#include "Point.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle{
    public:
    Point p1;
    Point p2;
    Point p3;
    Triangle();
    Triangle(Point p1, Point p2, Point p3);

    void CreateTriangle();
    void draw(const std::string& data);
    ~Triangle();
};

#endif // TRIANGLE_H