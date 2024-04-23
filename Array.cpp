//Initializing arrays and iterate through each and every element
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector <string> string_elements = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    for (const string& string_elements : string_elements) {

        if (string_elements[0] == 'B') {
        
            cout << string_elements << endl;
        }
    }

    return 0;
}
