#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

int main() {
    char choice;
    do {
        std::cout << "Options:" << std::endl;
        std::cout << "1. Calculate the area of a square" << std::endl;
        std::cout << "2. Calculate the area of a triangle" << std::endl;
        std::cout << "3. Calculate the area of a circle" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case '1': {
                double side;
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;
                shapes::Square square(side);
                std::cout << "Area of the square: " << shapes::Area::calculateSquareArea(square) << std::endl;
                break;
            }
            case '2': {
                double sideA, sideB, sideC;
                std::cout << "Enter the lengths of the three sides of the triangle: ";
                std::cin >> sideA >> sideB >> sideC;
                shapes::Triangle triangle(sideA, sideB, sideC);
                std::cout << "Area of the triangle: " << shapes::Area::calculateTriangleArea(triangle) << std::endl;
                break;
            }
            case '3': {
                double radius;
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;
                shapes::Circle circle(radius);
                std::cout << "Area of the circle: " << shapes::Area::calculateCircleArea(circle) << std::endl;
                break;
            }
            case '4':
                std::cout << "Exiting program. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != '4');

    return 0;
}
