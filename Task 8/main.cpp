#include <iostream>
#include "Person.h"

using namespace std;

int main(){

    Person Jane = Person("Jane", 60.0f);
    Person John = Person("John", 75.0f);

    float totalweight = Jane + John;

    cout<<"Total weight: "<<totalweight<<endl;

    return 0;
}