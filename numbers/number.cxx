#include <iostream>
#include <number.h>

using namespace std;
Number::Number(int start)}{
    data=start;
}
void Number::add(int x){
    data=data+x;
}
void sub(int x){
    data=data-x;
}
void display(){
    cout<<"Data is "<<data<<endl;
}