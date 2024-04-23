#include<iostream>
#include<iomanip>
#include<cstdlib>

//Creating a namespace to hold all function decalarations
namespace polygons {
    //declaration for Triangle function
    double Triangle(double Base, double Height);
    //Declaration for Rectangle function
    double Rectangle(double width, double height);
    //Declaration for square function
    double Square(double side);
}
using namespace std;

int main() {
    bool quit = false;

//Using while loop so that the program should not stop running until the user provides the input to the program
    while (!quit) {
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "4. Quit Program\n" << endl;
        cout << "Enter Selection:" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                double base, height;
                cout << "Please provide the base of the triangle: ";
                cin >> base;
                cout << "Please provide the height of the triangle: ";
                cin >> height;
                double area = polygons::Triangle(base, height);
                cout << fixed << setprecision(2);
                cout << "The area for your request is: " << area << endl;
                break;
            }
            case 2: {
                double width, height;
                cout << "Please provide the width of the rectangle: ";
                cin >> width;
                cout << "Please provide the height of the rectangle: ";
                cin >> height;
                double area = polygons::Rectangle(width, height);
                cout << fixed << setprecision(2);
                cout << "The area for your request is: " << area << endl;
                break;
            }
            case 3: {
                double side;
                cout << "Please provide the side length of the square: ";
                cin >> side;
                double area = polygons::Square(side);
                cout << fixed << setprecision(2);
                cout << "The area for your request is: " << area << endl;
                break;
            }
            case 4: {//this will exits the program
                cout << "Thank you for using the program!\n " << endl;
                quit = true;
                break;
            }
            default:
                cout << "Your entry was invalid!\n " << endl;
        }

        cout << "------------------------" << endl;//Marking the end of a computation
    }

    return 0;
}

double polygons::Triangle(double Base, double Height) {
    return 0.5 * Base * Height;
}

double polygons::Rectangle(double width, double height) {
    return width * height;
}

double polygons::Square(double side) {
    return side * side;
}
