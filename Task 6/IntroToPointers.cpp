#include <iostream>
using namespace std;

int main(){
    //declare and initialize pointers
    //so that it doesn't store a random address
    int* pPointer = nullptr;
    int integerVar = 5;
    //assign pointer to address of object
    pPointer = &integerVar;

    //output the value of integer 
    cout << "integerVar: "<< integerVar<<endl;

    //output of the address of intergerVar
    cout << "Address of integerVar: "<<&integerVar<<endl;

    //output the address assigned to pPointer  
    cout << "pPointer: "<< pPointer <<endl;

    //output of the address of pPointer
    cout << "Address of pPointer: "<<&pPointer<<endl;

    return 0;
}