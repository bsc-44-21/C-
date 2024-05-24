#include <iostream>
using namespace std;

int main(){
   //null pointer 
   int* pPointer = nullptr;

   int numberArrays[3] = {10,20,30};

   //assign address of first element to pointer
   pPointer = numberArrays;

   // output the address of the first element 
   cout<<"Address at PPointer: "<<pPointer<<endl;
   cout << "Adrdress of numberArrays[0]: "<<numberArrays<<endl;

   //// output the address of the first element  using the pointer and indirection
   cout<< "value at pPointer: "<<*pPointer<<endl;

   //This outputs the value of the second element
   cout << "Value at ++pPoniter: "<<*(++pPointer)<<endl;
    return 0;
}