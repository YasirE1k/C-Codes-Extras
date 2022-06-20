#include <stdio.h>
#include <stdlib.h>

int main() {
	float number,newValue,percentzerothree;
	printf("number:");
	scanf("%f",&number);
	
	percentzerothree=number*(0.005);
	newValue=number+percentzerothree;
	printf("%f",newValue);
	
	return 0;
	
}
