/* prime.i */
/* swig interface file*/
%module prime
%{
#include <stdio.h>
#include "prime"
extern bool prime(int x);	
%}

extern bool prime(int x);
