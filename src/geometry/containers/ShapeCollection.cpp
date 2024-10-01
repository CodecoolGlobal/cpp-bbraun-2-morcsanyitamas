#include <iostream>
#include "ShapeCollection.h"

using namespace std;

void ShapeCollection::addCircle(Circle const& circle) {
    circles.push_back(circle);
}

void ShapeCollection::addRectangle(Rectangle const& rectangle) {
    rectangles.push_back(rectangle);
}

void ShapeCollection::addTriangle(Triangle const& triangle) {
    triangles.push_back(triangle);
}

void ShapeCollection::addSquare(Square const& square) {
    squares.push_back(square);
}

void ShapeCollection::addEquilateralTriangle(EquilateralTriangle const& equilateralTriangle) {
    equilateralTriangles.push_back(equilateralTriangle);
}

void ShapeCollection::addRegularPentagon(RegularPentagon const& regularPentagon) {
    regularPentagons.push_back(regularPentagon);
}

std::string ShapeCollection::getShapesTable() const {
    string table = "";

    for (Circle circle: circles) {
        table += circle.toString() + "\n";
    }
    
     for (auto rectangle: rectangles) {
        table += rectangle.toString() + "\n";
    }

    for (Triangle triangle: triangles) {
        table += triangle.toString() + "\n";
    }

    for (Square square: squares) {
        table += square.toString() + "\n";
    }

    for (EquilateralTriangle equilateralTriangle: equilateralTriangles) {
        table += equilateralTriangle.toString() + "\n";
    }

    for (RegularPentagon regularPentagon: regularPentagons) {
        table += regularPentagon.toString() + "\n";
    }

    return table;
}

string ShapeCollection::getLargestShapeByArea() const {
    double maxArea = 0;
    string maxAreaShape = "";

    for(Circle circle: circles){
        if (circle.calculateArea() > maxArea){
            maxArea = circle.calculateArea();
            maxAreaShape = circle.toString();
        }
    }

     for(Rectangle rectangle: rectangles){
        if (rectangle.calculateArea() > maxArea){
            maxArea = rectangle.calculateArea();
            maxAreaShape = rectangle.toString();
        }
    }

    for(Triangle triangle: triangles){
        if (triangle.calculateArea() > maxArea){
            maxArea = triangle.calculateArea();
            maxAreaShape = triangle.toString();
        }
    }

    for(Square square: squares){
        if (square.calculateArea() > maxArea){
            maxArea = square.calculateArea();
            maxAreaShape = square.toString();
        }
    }

    for(EquilateralTriangle equilateralTriangle: equilateralTriangles){
        if (equilateralTriangle.calculateArea() > maxArea){
            maxArea = equilateralTriangle.calculateArea();
            maxAreaShape = equilateralTriangle.toString();
        }
    }

    for(RegularPentagon regularPentagon: regularPentagons){
        if (regularPentagon.calculateArea() > maxArea){
            maxArea = regularPentagon.calculateArea();
            maxAreaShape = regularPentagon.toString();
        }
    }

    return maxAreaShape;
}

string ShapeCollection::getLargestShapeByPerimeter() const{
    double maxPerimeter = 0;
    string maxPerimeterShape = "";

    for(Circle circle: circles){
        if (circle.calculatePerimeter() > maxPerimeter){
            maxPerimeter = circle.calculatePerimeter();
            maxPerimeterShape = circle.toString();
        }
    }

    for(Rectangle rectangle: rectangles){
        if (rectangle.calculatePerimeter() > maxPerimeter){
            maxPerimeter = rectangle.calculatePerimeter();
            maxPerimeterShape = rectangle.toString();
        }
    }

    for(Triangle triangle: triangles){
        if (triangle.calculatePerimeter() > maxPerimeter){
            maxPerimeter = triangle.calculatePerimeter();
            maxPerimeterShape = triangle.toString();
        }
    }

    for(Square square: squares){
        if (square.calculatePerimeter() > maxPerimeter){
            maxPerimeter = square.calculatePerimeter();
            maxPerimeterShape = square.toString();
        }
    }

    for(EquilateralTriangle equilateralTriangle: equilateralTriangles){
        if (equilateralTriangle.calculatePerimeter() > maxPerimeter){
            maxPerimeter = equilateralTriangle.calculatePerimeter();
            maxPerimeterShape = equilateralTriangle.toString();
        }
    }

    for(RegularPentagon regularPentagon: regularPentagons){
        if (regularPentagon.calculatePerimeter() > maxPerimeter){
            maxPerimeter = regularPentagon.calculatePerimeter();
            maxPerimeterShape = regularPentagon.toString();
        }
    }

    return maxPerimeterShape;
}




