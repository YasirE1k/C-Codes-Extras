#include <stdio.h>
#include <stdlib.h>

int main() {
	int number,firstdigit=0,theotherdigits=0;
	
	int i=10,a=7;
	int k=0;
	while(number!=-1){
	printf("Enter a number:");
	scanf("%d",&number);
		firstdigit=(number*number)%10;
		a=6;
	//	i=4;
		theotherdigits=0;
		for(i=10;0<a;i=i*10){
		a=(number*number)/i;
		k=(a)%10;
		theotherdigits=theotherdigits+k;	
	}
	if(firstdigit+theotherdigits==number){
	printf("Equal\n");
	}
	else if((firstdigit+theotherdigits!=number)&& number!=-1){
	printf("Not equal\n");
	}
	}
	printf("Exitted\n");
	
	return 0;
}
