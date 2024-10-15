#include <iostream>
#include <fstream>
#include <cmath>
#include <stdexcept>
#include "HeaderFiles/Input.h"
#include "HeaderFiles/Square.h"
#include "HeaderFiles/Line.h"
#include "HeaderFiles/Point.h"
#include "HeaderFiles/Circle.h"
#include "HeaderFiles/Rectangle.h"
#include "HeaderFiles/Triangle.h"

#define M_PI 3.14159265358979323846

using namespace std;

Input::Input() {}

void Input::getInput() {

    string data;

    cout << "Please enter the shape type (Square, Line, Point, Circle, Rectangle, Triangle): ";
    cin >> shapeType;

    try {
        if (shapeType == "Square") {
            cout << "Please enter the x and y coordinates of the square: ";
            cin >> x1 >> y1;
            cout << "Please enter the length of the square: ";
            cin >> length;

            if (length <= 0) {
                throw invalid_argument("The length of the square must be greater than 0.");
            }

            data += to_string(x1) + " " + to_string(y1) + "\n" + to_string(x1 + length) + " " + to_string(y1) + "\n" + to_string(x1 + length) + " " + to_string(y1 + length) + "\n" + to_string(x1) + " " + to_string(y1 + length) + "\n" + to_string(x1) + " " + to_string(y1);
            Square S;
            S.draw(data);
        }
        else if (shapeType == "Line") {
            cout << "Please enter the x and y coordinates of the first point: ";
            cin >> x1 >> y1;
            cout << "Please enter the x and y coordinates of the second point: ";
            cin >> x2 >> y2;

            if (x1 == x2 && y1 == y2) {
                throw invalid_argument("The points are the same. Please enter different points.");
            }

            data += to_string(x1) + " " + to_string(y1) + "\n" + to_string(x2) + " " + to_string(y2) + "\n";
            Line L;
            L.draw(data);
        }
        else if (shapeType == "Point") {
            cout << "Please enter the x and y coordinates of the point: ";
            cin >> x1 >> y1;

            data += to_string(x1) + " " + to_string(y1) + "\n";
            Point Point(x1, y1);
            Point.draw(data);
        }
        else if (shapeType == "Rectangle") {
            cout << "Please enter the x and y coordinates of the rectangle: ";
            cin >> x1 >> y1;
            cout << "Please enter the length and breadth of the rectangle: ";
            cin >> length >> breadth;

            if (length <= 0 || breadth <= 0) {
                throw invalid_argument("Length and breadth must be greater than 0.");
            }

            data += to_string(x1) + " " + to_string(y1) + "\n" + to_string(x1 + length) + " " + to_string(y1) + "\n" + to_string(x1 + length) + " " + to_string(y1 + breadth) + "\n" + to_string(x1) + " " + to_string(y1 + breadth) + "\n" + to_string(x1) + " " + to_string(y1);
            Rectangle R;
            R.draw(data);
        }
        else if (shapeType == "Triangle") {
            cout << "Please enter the x and y coordinates of the first point: ";
            cin >> x1 >> y1;
            cout << "Please enter the x and y coordinates of the second point: ";
            cin >> x2 >> y2;
            cout << "Please enter the x and y coordinates of the third point: ";
            cin >> x3 >> y3;

            if ((x1 == x2 && y1 == y2) || (x1 == x3 && y1 == y3) || (x2 == x3 && y2 == y3)) {
                throw invalid_argument("The points are the same. Please enter different points.");
            }
            if ((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) == 0) {
                throw invalid_argument("The points are collinear and do not form a valid triangle.");
            }

            data += to_string(x1) + " " + to_string(y1) + "\n" + to_string(x2) + " " + to_string(y2) + "\n" + to_string(x3) + " " + to_string(y3) + "\n";
            Triangle T;
            T.draw(data);
        }
        else if (shapeType == "Circle") {
            cout << "Please enter the x and y coordinates of the circle: ";
            cin >> x1 >> y1;
            cout << "Please enter the radius of the circle: ";
            cin >> radius;

            if (radius <= 0) {
                throw invalid_argument("The radius must be greater than 0.");
            }

            for (int i = 0; i <= 100; ++i) {
                double angle = 2.0 * M_PI * i / 100;
                data += to_string(x1 + radius * cos(angle)) + " " + to_string(y1 + radius * sin(angle)) + "\n";
            }
            data += to_string(x1 + radius) + " " + to_string(y1);
            Circle C;
            C.draw(data);
        }
        else {
            throw invalid_argument("Invalid shape type entered.");
        }
    }
    catch (const invalid_argument &e) {
        cerr << "Error: " << e.what() << endl;
    }
}
