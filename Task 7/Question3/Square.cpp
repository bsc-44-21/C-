// Square.cpp
#include "Square.h"

namespace shapes {
    Square::Square(double side) : side(side) {}

    Square::~Square() {} // Destructor

    double Square::getSide() const {
        return side;
    }
}
