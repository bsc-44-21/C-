#include <iostream>
#include "Rectangle.h"

int main() {
    // Creating an instance of Rectangle
    Rectangle myRectangle;

    // Taking input from user as length and width;
    double len, wid;
    std::cout << "Enter length: ";
    std::cin >> len;
    std::cout << "Enter width: ";
    std::cin >> wid;

    // accessor methods 
    myRectangle.setLength(len);
    myRectangle.setWidth(wid);

    // Calculating and displaying the area
    double area = myRectangle.calculateArea();
    std::cout << "Rectangle Area: " << area << std::endl;

    return 0;
}
