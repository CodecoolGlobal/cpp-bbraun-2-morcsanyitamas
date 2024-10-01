#include "Square.h"

using namespace std;

double Square::calculateArea() const {
    return a * a;
}

double Square::calculatePerimeter() const {
    return 4 * a;
}

Square::Square(double a): a(a) {}

string Square::toString() const {
    return "Square, a = " + to_string(a);
}

string Square::getPerimeterFormula() {
    return "4*a";
}

string Square::getAreaFormula() {
    return "a*a";
}