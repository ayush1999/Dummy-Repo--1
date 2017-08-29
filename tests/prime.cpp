#include "prime"
#include <stdio.h>
bool prime(int x){
    int count=0,i;
    for(i=2;i<x;i++){
    	if (x%i==0){
    		count++;
    		break;
    	}
    	else continue;
    }
if (count==0){
	return True;
}
else
	return False;
}
