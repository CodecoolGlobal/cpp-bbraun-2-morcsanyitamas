#pragma once
#include <string>

class EquilateralTriangle {
private:
   double const a;

public:
   double calculateArea() const;
   double calculatePerimeter() const;
   EquilateralTriangle(double a);
   std::string toString() const;
   static std::string getPerimeterFormula();
   static std::string getAreaFormula();
};