#pragma once
#include <string>
#include "Points.h"

class Circle {
private:
   double r;
   Points center;
public:
   double calculateArea();
   double calculatePerimeter();
   Circle(double radius, Points center);
   std::string toString();
   static std::string getPerimeterFormula();
   static std::string getAreaFormula();
};
