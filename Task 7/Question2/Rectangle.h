#pragma once

class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor
    Rectangle();

    // Overloaded constructor with parameters
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
    }

    // Accessor methods
    void setLength(double len);
    void setWidth(double wid);
    double getLength() const;
    double getWidth() const;

    // Member function to calculate area
    double calculateArea() const;
    ~Rectangle() {
        // Destructor to clean up here
    }
};
