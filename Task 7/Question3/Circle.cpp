// Circle.cpp
#include "Circle.h"

namespace shapes {
    Circle::Circle(double radius) : radius(radius) {}

    Circle::~Circle() {} // Destructor

    double Circle::getRadius() const {
        return radius;
    }
}
