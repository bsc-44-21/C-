// Area.cpp
#include "Area.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include <cmath>

double shapes::Area::calculateSquareArea(const shapes::Square& square) {
    return square.getSide() * square.getSide();
}

double shapes::Area::calculateTriangleArea(const shapes::Triangle& triangle) {
    double a = triangle.getSideA();
    double b = triangle.getSideB();
    double c = triangle.getSideC();
    double s = (a + b + c) / 2; // Semi-perimeter
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

double shapes::Area::calculateCircleArea(const shapes::Circle& circle) {
    return 3.14 * circle.getRadius() * circle.getRadius(); // Alternatively, you can use M_PI if available
}
