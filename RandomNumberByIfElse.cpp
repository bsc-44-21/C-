//Generating random numbers following if-else statements
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand(time(0));
    //Generating numbers less between 0 and 11;
    int days_until_expiration = rand() % 12;

//using if statement to satisfy our conditions

    if(days_until_expiration <= 0)
    {
        //output on console for random number less than or equal to 0;
        cout << "Your subscription has expired." << endl;
    }
    else if(days_until_expiration  == 1)
    {
        //output on console for random number is equal to 0;
        cout << " Your subscription expires within a day!! \n Renew now and save 20%!!." << endl;
    }
    else if(days_until_expiration  <= 5)
    {
        //output on console for random number less than or equal to 5;
        cout << " Your subscription expires in  " << days_until_expiration << " days.\n Renew now and save 10%!!." << endl;
    } 
    else if(days_until_expiration<=10)
    {
        //output on console for random number less than or equal to 10;
        cout<<"You have an active subscription!."<<endl;
    }

    return 0;
}