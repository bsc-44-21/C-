// Circle.cpp
#include "Circle.h"
// a namespace  holding a class and all member variables
namespace shapes {
    Circle::Circle(double radius) : radius(radius) {}

    Circle::~Circle() {} // Destructor

    double Circle::getRadius() const {
        return radius;
    }
}
