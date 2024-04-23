#include<iostream>
#include<limits>

using namespace std;

int main()
{
    int user_value;
    bool user_value_is_valid = false;

    while (!user_value_is_valid) {
        cout << "Please enter an integer value between 5 and 10:  ";
        
        if (!(cin >> user_value)) {
            cin.clear();
            cin.ignore(numeric_limits <streamsize> ::max(), '\n');
            cout << "Sorry, you entered an invalid number. Please try again. " << endl;
        }
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
