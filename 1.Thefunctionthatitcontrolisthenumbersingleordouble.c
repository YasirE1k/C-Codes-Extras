#include <stdio.h>
#include <stdlib.h>

int isnumbersingleordouble(int number){

if(number%2==0){
	return 1;
	}else if(number%2==1){
	return 0;
	}
}
int main() {
	
	printf("%d",isnumbersingleordouble(6));
	
	return 0;
}
