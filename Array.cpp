//Initializing arrays and iterate through each and every element
#include<iostream>
#include<string>//provide functions for for working with strings
#include<vector>//For dynamic array, provides functions for adding, removing and accessing arrays 

using namespace std;

int main()
{
    vector <string> string_elements = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
//using loop to iterate through array elements and print the elememnt thaat starts with B on console
    for (const string& string_elements : string_elements) {

        if (string_elements[0] == 'B') {
        
            cout << string_elements << endl;
        }
    }

    return 0;
}
