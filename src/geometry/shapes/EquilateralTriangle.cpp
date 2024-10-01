#include "EquilateralTriangle.h"
#include <cmath>

using namespace std;

double EquilateralTriangle::calculateArea() const {
    return a * a * sqrt(3) / 4;
}

double EquilateralTriangle::calculatePerimeter() const {
    return 3 * a;
}

EquilateralTriangle::EquilateralTriangle(double a): a(a) {}

string EquilateralTriangle::toString() const {
    return "Equilateral Triangle, a = " + to_string(a);
}

string EquilateralTriangle::getPerimeterFormula() {
    return "3*a";
}

string EquilateralTriangle::getAreaFormula() {
    return "a*a*sqrt(3)/4";
}