//Generating random numbers following switch statements.
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand( static_cast <unsigned int> (time(0)));

    int days_until_expiration = rand() % 12;
//Using switch cases to satisfy some conditions
    switch (days_until_expiration) {
        case 0: //when the random number generated is 0
            cout << "Your subscription has expired!." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!\n  Renew now and save 20%!." << endl;
            break;
        case 2:// When random numbers generated are grreater than 0 and less than or equal to 5;
        case 3:
        case 4:
        case 5:
            cout << " Your subscription expires in " << days_until_expiration << " days.\n  Renew now and save 10%!!" << endl;
            break;
        case 6://When random numbers generated are greater than 5 and less than or equal to 10
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!." << endl;
            break;
        default://any number generated which is none of the above
            cout << "You have an active subscription!." << endl;
            break;
    }

    return 0;
}