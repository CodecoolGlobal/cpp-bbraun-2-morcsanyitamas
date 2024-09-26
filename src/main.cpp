#include <iostream>
#include <limits>

#include "ShapeCollection.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
#include "EquilateralTriangle.h"
#include "RegularPentagon.h"
#include "Circle.h"

using namespace std;

void addNewShape(ShapeCollection& shapeCollection);
double getPositiveDouble(const string &prompt);

int main() {
    
    ShapeCollection shapeCollection{};
    bool isRunning = true;

    while (isRunning) {
        int option = 0;
        cout << "What do you want to do?" << endl;
        cout << "Add new shape (1)" << endl;
        cout << "Show all shapes (2)" << endl;
        cout << "Show shape with the largest perimeter (3)" << endl;
        cout << "Show shape with the largest area (4)" << endl;
        cout << "Quit (0)" << endl;
        cin >> option;

        switch (option) {
            case 1:
                addNewShape(shapeCollection);
                break;
            case 2:
                cout << shapeCollection.getShapesTable() << endl;
                break;
            case 3:
                cout << "Shape with the largest perimeter:" << endl;
                cout << shapeCollection.getLargestShapeByPerimeter() << endl;
                break;
            case 4:
                cout << "Shape with the largest area:" << endl;
                cout << shapeCollection.getLargestShapeByArea() << endl;
                break;
            case 0:
                isRunning = false;
                break;
        }
    }

    return 0;
}

void addNewShape(ShapeCollection& shapeCollection){
    bool isRunning = true;

    while (isRunning) {
        int option = 0;
        cout << "What shape do you want to add?\n";
        cout << "Circle (1)\n";
        cout << "Rectangle (2)\n";
        cout << "Triangle (3)\n";
        cout << "Square (4)\n";
        cout << "EquilateralTriangle (5)\n";
        cout << "RegularPentagon (6)\n";
        cout << "Quit (0)\n";
        cin >> option;

        switch (option) {
            case 1:
            {
                double radius = getPositiveDouble("Radius: ");
                Points circleCenter;
                circleCenter.x = getPositiveDouble("Center x: ");
                circleCenter.y = getPositiveDouble("Center y: ");
                shapeCollection.addCircle(Circle(radius, circleCenter));
                break;
            }
            case 2:
            {
                double a = getPositiveDouble("Side a: ");
                double b = getPositiveDouble("Side b: ");
                shapeCollection.addRectangle(Rectangle(a, b));
                break;
            }
            case 3:
            {
                double a = getPositiveDouble("Side a: ");
                double b = getPositiveDouble("Side b: ");
                double c = getPositiveDouble("Side c: ");
                shapeCollection.addTriangle(Triangle(a, b, c));
                break;
            }
            case 4:
            {
                double a = getPositiveDouble("Side a: ");
                shapeCollection.addSquare(Square(a));
                break;
            }
            case 5:
            {
                double a = getPositiveDouble("Side a: ");
                shapeCollection.addEquilateralTriangle(EquilateralTriangle(a));
                break;
            }
            case 6:
            {
                double a = getPositiveDouble("Side a: ");
                shapeCollection.addRegularPentagon(RegularPentagon(a));
                break;
            }
            case 0:
                isRunning = false;
                break;
        }
    }
}

double getPositiveDouble(const string &prompt) {
    double value;
    do {
        cout << prompt;
        cin >> value;
        if (cin.fail() || value <= 0) {
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter a positive double." << endl;
        }
    } while (value <= 0);
    return value;
}