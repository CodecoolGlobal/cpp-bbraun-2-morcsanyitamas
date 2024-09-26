#define _USE_MATH_DEFINES
#include "Circle.h"
#include <cmath>

using namespace std;

Circle::Circle(double radius, Points center): r(radius), center(center) {}

double Circle::calculateArea() {
    return M_PI * r * r;
}

double Circle::calculatePerimeter() {
    return 2 * M_PI * r;
}

string Circle::toString(){
    return "Circle, r = " + to_string(r) + " center x: " + to_string(center.x) + " center y: " + to_string(center.y);
}

string Circle::getPerimeterFormula() {
    return "2*π*r";
}

string Circle::getAreaFormula() {
    return "π*r*r";
}