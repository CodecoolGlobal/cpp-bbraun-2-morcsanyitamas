#pragma once
#include <string>

class Rectangle {
private:
   double a;
   double b;

public:
   double calculateArea();
   double calculatePerimeter();
   Rectangle(double a, double b);
   std::string toString();
   static std::string getPerimeterFormula();
   static std::string getAreaFormula();
};