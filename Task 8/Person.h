#pragma once 

#include <string>

class Person{
public :
Person(const std::string& firstname, float newWeight);

~Person();
//overload the add operator
float operator + (const Person& otherPerson);

private:
float newweight;
std::string mfirstname;
int mage;
};