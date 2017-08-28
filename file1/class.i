
%module class
%{
#include "class.h"    
%}

class point{
    int x,y;
public:
    void get();
    void display();
};