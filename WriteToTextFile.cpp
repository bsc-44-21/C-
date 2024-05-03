//Writitng on a text file
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream myfile("example2.txt");

    if(myfile.is_open())
    {
        myfile<<"This is a line.\n";
        myfile<<"This is anoyther line.\n";
        myfile<<"Go ahead and explore more!!!!!";
        myfile.close();
    }
    else{
        cout<<"Unable to open file";
    }
    return 0;
}