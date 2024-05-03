#include <iostream>
#include <fstream>

using namespace std;

int main(){
    //create and open a text file
    ofstream myfile("example.txt");

    void open(const char *example, ios::openmode mode);
    
    fstream example;
    example.open("file.text",ios::out|ios::in);
    if(myfile.is_open()){
        //Ok, proceed with output
    }
    //close the file
    myfile.close();



    return 0;
}