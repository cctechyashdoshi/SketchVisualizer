#include "HeaderFiles\Manager.h"
#include "HeaderFiles\Input.h"
#include "HeaderFiles\Point.h"
#include "HeaderFiles\Line.h"
#include "HeaderFiles\Circle.h"
#include "HeaderFiles\Rectangle.h"
#include "HeaderFiles\Square.h"
#include "HeaderFiles\FileRead.h"
#include "HeaderFiles\FileWrite.h"
#include "HeaderFiles\Triangle.h"

void Manager::run() {
    Input inp;
    inp.getInput();

    Point a(inp.x1, inp.y1);
    Point b(inp.x2, inp.y2);
    Point c(inp.x3, inp.y3);

    if (inp.shapeType == "Point") {
        a.CreatePoint();
    } else if (inp.shapeType == "Line") {
        Line l(a, b);
        l.Createline();
    } else if (inp.shapeType == "Circle") {
        Circle circle(a, inp.radius);
        circle.CreateCircle();
    } else if (inp.shapeType == "Rectangle") {
        Rectangle r(a, inp.length, inp.breadth);
        r.CreateRectangle();
    } else if (inp.shapeType == "Square") {
        Square s(a, inp.length);
        s.CreateSquare();
    } else if (inp.shapeType == "Triangle") {
        Triangle t(a, b, c);
        t.CreateTriangle();
    }
    else {
        cout << "Invalid shape type!" << endl;
    }
}