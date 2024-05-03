#include<iostream>
using namespace std;

int main(){
    int count  = 10;
    int* pMypointer = nullptr;
    pMypointer = &count;
    cout<<"The address is :"<<&count<<endl;
    cout<<"The another way to get address is :" << pMypointer<<endl;
    cout<<"The value is :" << *pMypointer << endl;
    cout << "The another value is :"<<count;
}