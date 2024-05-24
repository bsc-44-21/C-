#include <iostream>
#include "Rectangle.h"

int main() {
    // Creating an instance of Rectangle using the default constructor
    Rectangle myRectangle1;

    // Input length and width for the second rectangle
    double len, wid;
    std::cout << "Enter length for the second rectangle: ";
    std::cin >> len;
    std::cout << "Enter width for the second rectangle: ";
    std::cin >> wid;

    // Create another instance of Rectangle using the overloaded constructor
    Rectangle myRectangle2(len, wid);

    // Calculate and display the area for both rectangles
    double area1 = myRectangle1.calculateArea();
    double area2 = myRectangle2.calculateArea();

    std::cout << "Rectangle 1 Area: " << area1 << std::endl;
    std::cout << "Rectangle 2 Area: " << area2 << std::endl;

    return 0;
}

