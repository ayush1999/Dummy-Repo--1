#include <iostream>
# include "class.h"
using namespace std;


void point::get(){
    cout<<"Enter the coordinates";
    cin>>x>>y;
}
void point::display(){
    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y;
}
