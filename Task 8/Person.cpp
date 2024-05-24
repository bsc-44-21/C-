#include "Person.h"

// Constructor with a float parameter
Person::Person(const std::string& firstname, float newWeight)
{
    newweight = newWeight;
    mfirstname = firstname;
    mage = 0;
}

// Destructor
Person::~Person()
{

}

// Overload the addition operator
float Person::operator+(const Person& otherPerson)
{
    return newweight + otherPerson.newweight;
}

