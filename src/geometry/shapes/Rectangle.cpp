#include "Rectangle.h"

using namespace std;

double Rectangle::calculateArea() {
    return a * b;
}

double Rectangle::calculatePerimeter() {
    return 2 * a + 2 * b;
}

Rectangle::Rectangle(double a, double b): a(a), b(b) {}

string Rectangle::toString(){
    return "Rectangle, a = " + to_string(a) + " ,b = " + to_string(b);
}

string Rectangle::getPerimeterFormula() {
    return "2*a+2×b";
}

string Rectangle::getAreaFormula() {
    return "a*b";
}