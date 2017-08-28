#include "fibo.h"
#include<stdio.h>
int trial(){
printf("Invoked");
}
int fibo(int x){
    trial();
    if(x==1){
    	return 1;
    }
    if (x==2){
    	return 1;
    }
    else
    	return fibo(x-1)+fibo(x-2);

}

