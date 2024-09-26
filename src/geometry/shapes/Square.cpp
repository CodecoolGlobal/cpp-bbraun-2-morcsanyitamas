#include "Square.h"

using namespace std;

double Square::calculateArea() {
    return a * a;
}

double Square::calculatePerimeter() {
    return 4 * a;
}

Square::Square(double a): a(a) {}

string Square::toString(){
    return "Square, a = " + to_string(a);
}

string Square::getPerimeterFormula() {
    return "4*a";
}

string Square::getAreaFormula() {
    return "a*a";
}