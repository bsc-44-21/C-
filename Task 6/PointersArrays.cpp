#include <iostream>
using namespace std;

int main(){
    int numberArray[5];
    int * pPointer = nullptr;

    //assign the address to the first element to the pointer
    pPointer = numberArray;

    *pPointer = 10; //assign a value to the first element
    //inrement the pointer using pointer arithmetic
    //to assign the address of the second element to the pointer
    pPointer++;
    *pPointer = 20; //assign a vlaue to the second element

    //assign the address of the third element to the pointer
    pPointer = &numberArray[2];
    *pPointer = 30; // assign the value to the third element

    //assign the  address to the fourth element to the pointer
    //using pointer arithmetic
    pPointer = numberArray + 3;
    *pPointer = 40; //assign the value of the fourth element 

    //assign the address to the first element to the pointer 
    pPointer = numberArray;

    //assign a value to the fifth element using indirection and pointer
    //POINTE RARITHMETIC
    *(pPointer+4) = 50;

    //iterate and output all the elements in the array
    for (int n = 0; n<5; n++){
        cout<<numberArray[n]<<",";
    }

    return 0;
}