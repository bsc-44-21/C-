#include <iostream>

int main() {
    // Prompting the user to enter dimensions of the array
    int rowNumber, colNumber;
    std::cout << "Enter the number of rows, must NOT less that 1 and NOT greater than 3: ";
    std::cin >> rowNumber;
    std::cout << "Enter the number of columns, must NOT less that 1 and NOT greater than 3: ";
    std::cin >> colNumber;

    // ensuring that the dimensions values are between 1 and 3
    if ((rowNumber < 1 || rowNumber > 3) || (colNumber < 1 || colNumber > 3)) {
        std::cout << "Out of range. Please enter values between 1 and 3." << std::endl;
        return 1;
    }
    // Allocate memory for a dynamic 2D array of doubles
    double** array = new double*[rowNumber];
    for (int i = 0; i < rowNumber; ++i) {
        array[i] = new double[colNumber];
    }
     // Prompt the user to enter values for the array
    for (int i = 0; i < rowNumber; ++i) {
        for (int j = 0; j < colNumber; ++j) {
            std::cout << "Enter value at index (" << i << ", " << j << "): ";
            std::cin >> array[i][j];
        }
    }
    // Display the array values
    std::cout << "Array values:" << std::endl;
    for (int i = 0; i < rowNumber; ++i) {
        for (int j = 0; j < colNumber; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    // Deallocate the dynamically allocated memory
    for (int i = 0; i < rowNumber; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
