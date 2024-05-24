#pragma once

namespace shapes {
    class Triangle {
    private:
        double sideA;
        double sideB;
        double sideC;

    public:
        Triangle(double sideA, double sideB, double sideC);
        ~Triangle(); // Destructor
        double getSideA() const;
        double getSideB() const;
        double getSideC() const;
    };
}