#include <iostream>
#include "number.h"

using namespace std;

void Number::add(int x){
    data=data+x;
}
void Number::sub(int x){
    data=data-x;
}
void Number::display(){
    cout<<"Data is "<<data<<endl;
}
