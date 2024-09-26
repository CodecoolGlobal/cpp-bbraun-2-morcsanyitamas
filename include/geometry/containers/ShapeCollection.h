#pragma once
#include <vector>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
#include "EquilateralTriangle.h"
#include "RegularPentagon.h"

class ShapeCollection {
private:
   std::vector<Circle> circles;
   std::vector<Rectangle> rectangles;
   std::vector<Triangle> triangles;
   std::vector<Square> squares;
   std::vector<EquilateralTriangle> equilateralTriangles;
   std::vector<RegularPentagon> regularPentagons;

public:
   void addCircle(Circle circle);
   void addRectangle(Rectangle rectangle);
   void addTriangle(Triangle triangle);
   void addSquare(Square square);
   void addEquilateralTriangle(EquilateralTriangle equilateralTriangle);
   void addRegularPentagon(RegularPentagon regularPentagon);

   std::string getShapesTable();

   std::string getLargestShapeByPerimeter();
   std::string getLargestShapeByArea();
};