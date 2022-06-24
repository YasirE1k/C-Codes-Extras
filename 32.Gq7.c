#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void finding_middle_dot(float x1,float x2,float y1,float y2){
	
	printf("Value of middle dot; x: %.2f, y: %.2f\n",(x1+x2)/2,(y1+y2)/2);
}
void oklit_distance(float x1,float x2,float y1,float y2){
	
	printf("Oklit distance value: %.2f",sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
}

int main() {
	float x1,y1,x2,y2;
	
	printf("Enter x1 value :");
	scanf("%f",&x1);
	printf("Enter y1 value :");
	scanf("%f",&y1);
	printf("Enter x2 value :");
	scanf("%f",&x2);
	printf("Enter y2 value :");
	scanf("%f",&y2);
	
	finding_middle_dot(x1,x2,y1,y2);
	
	oklit_distance(x1,x2,y1,y2);
	
	return 0;
}
