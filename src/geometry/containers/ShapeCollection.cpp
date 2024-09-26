#include <iostream>
#include "ShapeCollection.h"

using namespace std;

void ShapeCollection::addCircle(Circle circle) {
    circles.push_back(circle);
}

void ShapeCollection::addRectangle(Rectangle rectangle) {
    rectangles.push_back(rectangle);
}

void ShapeCollection::addTriangle(Triangle triangle) {
    triangles.push_back(triangle);
}

void ShapeCollection::addSquare(Square square) {
    squares.push_back(square);
}

void ShapeCollection::addEquilateralTriangle(EquilateralTriangle equilateralTriangle) {
    equilateralTriangles.push_back(equilateralTriangle);
}

void ShapeCollection::addRegularPentagon(RegularPentagon regularPentagon) {
    regularPentagons.push_back(regularPentagon);
}

std::string ShapeCollection::getShapesTable() {
    string table = "";

    for (Circle circle: circles) {
        table += circle.toString() + "\n";
    }
    
    return table;
}

string ShapeCollection::getLargestShapeByArea(){
    double maxArea = 0;
    string maxAreaShape = "";

    for(Circle circle: circles){
        if (circle.calculateArea() > maxArea){
            maxArea = circle.calculateArea();
            maxAreaShape = circle.toString();
        }
    }

    return maxAreaShape;
}

string ShapeCollection::getLargestShapeByPerimeter(){
    double maxPerimeter = 0;
    string maxPerimeterShape = "";

    for(Circle circle: circles){
        if (circle.calculatePerimeter() > maxPerimeter){
            maxPerimeter = circle.calculatePerimeter();
            maxPerimeterShape = circle.toString();
        }
    }

    return maxPerimeterShape;
}




