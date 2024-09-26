#pragma once
#include <string>

class EquilateralTriangle {
private:
   double a;

public:
   double calculateArea();
   double calculatePerimeter();
   EquilateralTriangle(double a);
   std::string toString();
   static std::string getPerimeterFormula();
   static std::string getAreaFormula();
};