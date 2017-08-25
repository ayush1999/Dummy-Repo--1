/* prime.i */
/* swig interface file*/
%module prime
%{
#include <stdio.h>
#include "prime.h"
extern void prime(int x);	
%}

extern void prime(int x);
