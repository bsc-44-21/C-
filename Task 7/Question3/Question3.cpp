#include <iostream>
#include <cmath> // For mathematical functions (e.g., pow, M_PI)

namespace shapes {

    // Square class
    class Square {
    private:
        double sideLength;

    public:
        Square() : sideLength(0.0) {}
        Square(double side) : sideLength(side) {}

        // Accessor method
        double getSideLength() const {
            return sideLength;
        }

        // Calculate area
        double calculateArea() const {
            return sideLength * sideLength;
        }

        // Destructor
        ~Square() {}
    };

    // Triangle class
    class Triangle {
    private:
        double base;
        double height;

    public:
        Triangle() : base(0.0), height(0.0) {}
        Triangle(double b, double h) : base(b), height(h) {}

        // Accessor methods
        double getBase() const {
            return base;
        }

        double getHeight() const {
            return height;
        }

        // Calculate area
        double calculateArea() const {
            return 0.5 * base * height;
        }

        // Destructor
        ~Triangle() {}
    };

    // Circle class
    class Circle {
    private:
        double radius;

    public:
        Circle() : radius(0.0) {}
        Circle(double r) : radius(r) {}

        // Accessor method
        double getRadius() const {
            return radius;
        }

        // Calculate area
        double calculateArea() const {
            return M_PI * pow(radius, 2);
        }

        // Destructor
        ~Circle() {}
    };

    // Area class (static methods)
    class Area {
    public:
        static double calculateSquareArea(const Square& square) {
            return square.calculateArea();
        }

        static double calculateTriangleArea(const Triangle& triangle) {
            return triangle.calculateArea();
        }

        static double calculateCircleArea(const Circle& circle) {
            return circle.calculateArea();
        }
    };
}

int main() {
    // Example usage
    shapes::Square mySquare(5.0);
    shapes::Triangle myTriangle(4.0, 3.0);
    shapes::Circle myCircle(2.5);

    std::cout << "Square Area: " << shapes::Area::calculateSquareArea(mySquare) << std::endl;
    std::cout << "Triangle Area: " << shapes::Area::calculateTriangleArea(myTriangle) << std::endl;
    std::cout << "Circle Area: " << shapes::Area::calculateCircleArea(myCircle) << std::endl;

    return 0;
}
