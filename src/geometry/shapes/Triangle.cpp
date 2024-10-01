#include "Triangle.h"
#include <cmath>

using namespace std;

double Triangle::calculateArea() const {
    return sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));
}

double Triangle::calculatePerimeter() const {
    return a + b + c;
}

Triangle::Triangle(double a, double  b, double  c): a(a), b(b), c(c), semiPerimeter(0.5 * calculatePerimeter()) {
}

string Triangle::toString() const {
    return "Triangle, a = " + to_string(a) + ", b = " + to_string(b) + ", c = " + to_string(c);
}

string Triangle::getPerimeterFormula() {
    return "a+b+c";
}

string Triangle::getAreaFormula() {
    return "sqrt(s*(s-a)*(s-b)*(s-c))";
}