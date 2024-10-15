#ifndef LINE_H
#define LINE_H
#include "Point.h"
#include "Shape.h"
class Line{
    public:
    Point a;
    Point b;
    Line();
    Line(Point a, Point b);
    
    void Createline();
    void draw(const std::string& data);
    ~Line();
};

#endif // LINE_H