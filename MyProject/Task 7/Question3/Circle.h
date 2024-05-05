#pragma once

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