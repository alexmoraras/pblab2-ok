#include <stdlib.h>
#include <stdio.h>

int function(int x){	

	x=x-2;
	if(x>1)
        x=function(x);
	return 30-x;
}

int main(){
	int a=30, i=0;

	i=function(a);	
printf("i=%d", i);
	return 0;
}


