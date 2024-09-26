#include <iostream>
#include <limits>
#include <cstdlib>

#include "ShapeCollection.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
#include "EquilateralTriangle.h"
#include "RegularPentagon.h"
#include "Circle.h"

using namespace std;

void addNewShape(ShapeCollection& shapeCollection);
double getPositiveDouble(string prompt);

int main() {
    
    ShapeCollection s{};

    s.addCircle(Circle(3.0));
    s.addCircle(Circle(5.0));
    s.addRectangle(Rectangle(3, 4));
    s.addRegularPentagon(RegularPentagon(5));

    cout << s.getShapesTable() << endl;
   

    // ShapeCollection shapeCollection{};
    // bool isRunning = true;

    // while (isRunning) {
    //     int option = 0;
    //     cout << "What do you want to do?" << endl;
    //     cout << "Add new shape (1)" << endl;
    //     cout << "Show all shapes (2)" << endl;
    //     cout << "Show shape with the largest perimeter (3)" << endl;
    //     cout << "Show shape with the largest area (4)" << endl;
    //     cout << "Quit (0)" << endl;
    //     cin >> option;

    //     // menu implementaion
    // }

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

        // menu implementation
    }
}

double getPositiveDouble(string prompt) {
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