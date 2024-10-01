#pragma once
#include <string>

class Square {
private:
   double const a;
public:
   double calculateArea() const;
   double calculatePerimeter() const;
   Square(double a);
   std::string toString() const;
   static std::string getPerimeterFormula();
   static std::string getAreaFormula();
};