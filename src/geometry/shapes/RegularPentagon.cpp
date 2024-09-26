#include "RegularPentagon.h"
#include <cmath>

using namespace std;

double RegularPentagon::calculateArea() {
    return a * a * sqrt(5 * (5 + 2 * sqrt(5)))/4;
}

double RegularPentagon::calculatePerimeter() {
    return 5 * a;
}

RegularPentagon::RegularPentagon(double a): a(a) {}

string RegularPentagon::toString(){
    return "RegularPentagon, a = " + to_string(a);
}

string RegularPentagon::getPerimeterFormula() {
    return "5*a";
}

string RegularPentagon::getAreaFormula() {
    return "a*a*sqrt(5*(5+2*sqrt(5))/4";
}