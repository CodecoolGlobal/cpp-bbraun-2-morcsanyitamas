#pragma once
#include <string>
#include "Points.h"

class Circle {
private:
   double const r;
   Points const center;
public:
   double calculateArea() const;
   double calculatePerimeter() const;
   Circle(double radius, Points center);
   std::string toString() const;
   static std::string getPerimeterFormula();
   static std::string getAreaFormula();
};
