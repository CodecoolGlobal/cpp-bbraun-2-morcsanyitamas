#pragma once
#include <string>

class Triangle {
private:
   double a;
   double b;
   double c;
   double semiPerimeter;

public:
   double calculateArea();
   double calculatePerimeter();
   Triangle(double a, double b, double c);
   std::string toString();
   static std::string getPerimeterFormula();
   static std::string getAreaFormula();
};