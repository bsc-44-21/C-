#include <iostream>
#include <limits>//provide functions that represents limits eg maximum, minimum , precision and size

using namespace std;

int main()
{
    int user_value;
    bool user_value_is_valid = false;
//using while loop to continually prompt the user to correct values i.e between 5 and 10
    while (!user_value_is_valid) {
        cout << "Please enter an integer value between 5 and 10:  ";
        //Taking values from user and check if its an integer or not
        if (!(cin >> user_value)) {
            cin.clear();
            cin.ignore(numeric_limits <streamsize> ::max(), '\n');
            cout << "Sorry, you entered an invalid number. Please try again. " << endl;
        }
        //Checks if user input falls between 5 and 10 
        else if (user_value < 5 || user_value > 10) {
            cout << "Invalid input. Please enter an integer value between 5 and 10. " << endl;
        }
        else {
            user_value_is_valid = true;
        }
    }

    cout << "Your input value " << user_value << " has been accepted. " << endl;

    return 0;
}
