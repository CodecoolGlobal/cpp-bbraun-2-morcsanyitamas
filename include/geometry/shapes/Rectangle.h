#pragma once
#include <string>

class Rectangle {
private:
   double const a;
   double const b;
public:
   double calculateArea() const;
   double calculatePerimeter() const;
   Rectangle(double a, double b);
   std::string toString() const;
   static std::string getPerimeterFormula();
   static std::string getAreaFormula();
};