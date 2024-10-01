#pragma once
#include <string>

class RegularPentagon {
private:
   double const a;
public:
   double calculateArea() const;
   double calculatePerimeter() const;
   RegularPentagon(double a);
   std::string toString() const;
   static std::string getPerimeterFormula();
   static std::string getAreaFormula();
};