#include <iostream>
#include <string>//string library

int main()
{
    // allocating dyanmic memory for integer
    int* intvalue = new int;

    // allocation dynamic memory for string
    std::string* str_input = new std::string;

    // Prompting user to enter an integer
    std::cout << "Enter an integer value: ";
    std::cin >> *intvalue;

    // Prompting user to enter a string
    std::cout << "Enter a string: ";
    std::cin.ignore();
    std::getline(std::cin, *str_input);

    // outputing the results on console
    std::cout << "The integer value dynamically allocated is: " << *intvalue << std::endl;
    std::cout << "The string dynamically allocated is: " << *str_input << std::endl;

    // collecting up the memory
    delete intvalue;
    delete str_input;

    return 0;
}
