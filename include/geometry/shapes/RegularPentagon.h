#pragma once
#include <string>

class RegularPentagon {
private:
   double a;

public:
   double calculateArea();
   double calculatePerimeter();
   RegularPentagon(double a);
   std::string toString();
   static std::string getPerimeterFormula();
   static std::string getAreaFormula();
};