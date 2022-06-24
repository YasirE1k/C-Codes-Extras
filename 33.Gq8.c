#include <stdio.h>
#include <stdlib.h>

float calculateSeries(float a,float b){
	float i=1;
	float counter1=1;
	float result1=1;
	float valuestotal=0;
	float lastoccuredresult;
	float n=0;
	float j=1;
	while(a-n*b>=0){
		counter1=1;
		j=1;
		for(j=1;j<=(a-n*b);j++){
		counter1=counter1*j;
		}
		
	valuestotal=counter1+valuestotal;
	n++;
	}
	lastoccuredresult=(a/(a+b))*(valuestotal);
	return lastoccuredresult;
}
int main() {
	int a,b;
	printf("Please enter positive a and b values:");
	scanf("%d%d",&a,&b);
	
	while(a<b){
		printf("Please enter a value big or equal than b:");
		scanf("%d%d",&a,&b);
	}
	
	printf("Total result: %lf",calculateSeries(a,b));
	
	return 0;
}
