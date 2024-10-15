#ifndef INPUT_H
#define INPUT_H

#include <iostream>
#include <string>

using namespace std;

class Input {
public:
    int x1, y1, x2, y2, x3, y3, radius, length, breadth;
    string shapeType;

    Input();

    void getInput();
};

#endif // INPUT_H