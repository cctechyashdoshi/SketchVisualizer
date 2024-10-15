#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"
#include "Shape.h"

class Circle
{
    public:
        Point center;
        double radius;
        Circle();
        Circle(Point center, double radius);
        
        void CreateCircle();
        void draw(const std::string& data);
        ~Circle();
};

#endif
