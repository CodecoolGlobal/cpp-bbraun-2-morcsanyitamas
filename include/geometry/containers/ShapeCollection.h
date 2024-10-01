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
   void addCircle(Circle const& circle);
   void addRectangle(Rectangle const& rectangle);
   void addTriangle(Triangle const& triangle);
   void addSquare(Square const& square);
   void addEquilateralTriangle(EquilateralTriangle const& equilateralTriangle);
   void addRegularPentagon(RegularPentagon const& regularPentagon);
   std::string getShapesTable() const;
   std::string getLargestShapeByPerimeter() const;
   std::string getLargestShapeByArea() const;
};