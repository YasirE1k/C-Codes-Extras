#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char city[15];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("Enter the city");
		scanf("%s",city[i]);
	}
	for(i=0;i<3;i++)
	 {
		printf("The city that was entered");
		printf("%s",city[i]);
	 }
	return 0;
}
