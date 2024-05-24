#include <iostream>

void SwapNumbers(int* varA, int* varB);

int main() {
    int varA = 25;
    int varB = 100;
    std::cout << "varA before swap: " << varA << std::endl; // varA is 25
    std::cout << "VarB before swap: " << varB << std::endl; // varB is 100
    SwapNumbers(&varA, &varB);
    std::cout << "varA after swap: " << varA << std::endl; // varA is 100
    std::cout << "VarB after swap: " << varB << std::endl; // varB is 25
    return 0;
}

void SwapNumbers(int* varA, int* varB) {
    int temp = *varA;
    *varA = *varB;
    *varB = temp;
}
