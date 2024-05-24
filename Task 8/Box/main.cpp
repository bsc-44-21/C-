//main function for the program
#include <iostream>
#include "Box.h"
#include "Box.cpp"

int main()
{
    Box Box1;
    Box Box2;
    Box Box3;
    Box Box4;
    double volume = 0.0;

    //box 1 specification 
    Box1.SetLength(6.0);
    Box1.SetLength(7.0);
    Box1.SetLength(5.0);

    //box 2 specicfication
    Box2.SetLength(12.0);
    Box2.SetLength(13.0);
    Box2.SetLength(10.0);

//volume of box 1
volume = Box1.GetVolume();
cout<<"Volume of Box1: "<<volume<<endl;

//volume of Box 2
volume = Box1.GetVolume();
cout<<"Volume of Box2 :"<<volume<<endl;

//Add two object as follows
Box3 = Box1 + Box2;

//volume of box 3
volume = Box3.GetVolume();
cout<<"Volume of Box3 :"<<volume<<endl;

return 0;
}