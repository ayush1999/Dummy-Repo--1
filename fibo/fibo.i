/* Interface file for swig */
%module fibo
%{
	extern int fibo(int x);
%}

extern int fibo(int x);