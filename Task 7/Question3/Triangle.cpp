// Triangle.cpp
#include "Triangle.h"

namespace shapes {
    Triangle::Triangle(double sideA, double sideB, double sideC) : sideA(sideA), sideB(sideB), sideC(sideC) {}

    Triangle::~Triangle() {} // Destructor

    double Triangle::getSideA() const {
        return sideA;
    }

    double Triangle::getSideB() const {
        return sideB;
    }

    double Triangle::getSideC() const {
        return sideC;
    }
}
