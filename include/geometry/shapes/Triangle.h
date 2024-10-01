#pragma once
#include <string>

class Triangle {
private:
   double const a;
   double const b;
   double const c;
   double const semiPerimeter;

public:
   double calculateArea() const;
   double calculatePerimeter() const;
   Triangle(double a, double b, double c);
   std::string toString() const;
   static std::string getPerimeterFormula();
   static std::string getAreaFormula();
};