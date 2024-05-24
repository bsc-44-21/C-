#pragma once
// a namespace  holding a class and all member variables
namespace shapes {
    class Circle {
    private:
        double radius;

    public:
        Circle(double radius);
        ~Circle(); // Destructor
        double getRadius() const;
    };
}