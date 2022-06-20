#include <stdio.h>
#include <stdlib.h>

int trying(int number){
	int i=1;
	while(i<number){
		
		printf("*");
		i++;
	}
}
int main() {
	int enterednumber;
	printf("Enter the number:");
	scanf("%d",&enterednumber);
	printf("%d",trying(enterednumber));
	
	return 0;
}
