#ifndef SQUARE_H
#define SQUARE_H
#include "Point.h"

class Square{
    public:
    Point p1;
    double length;
    Square();
    Square(Point p1, double length);

    void CreateSquare();
    void draw(const std::string& data);
    ~Square();
};

#endif
