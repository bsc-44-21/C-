#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() {
    length = 0.0;
    width = 0.0;
}

// Accessor methods
void Rectangle::setLength(double len) {
    length = len;
}
void Rectangle::setWidth(double wid) {
    width = wid;
}
double Rectangle::getLength() const {
    return length;
}
double Rectangle::getWidth() const {
    return width;
}
// Member function to calculate area
double Rectangle::calculateArea() const {
    return length * width;
}
