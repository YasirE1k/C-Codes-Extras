#include <stdio.h>
#include <stdlib.h>

int main() {
	float number;
	
	while(1){
		
	printf("Enter the number");
	scanf("%f",&number);
	
	printf("%.4f ",number+number/5);
	}
	
	return 0;
}
