#ifndef POINT_H
#define POINT_H
#include "Shape.h"

class Point{
    public:
    int x;
    int y;
    Point() : x(0), y(0) {}
    Point(int x=0, int y=0);
    void CreatePoint();
    void draw(const std::string& data);
    ~Point();
};

#endif
