#include <stdio.h>
#include <stdlib.h>

int main() {
	float edge1,edge2,hipotenus,circumference,area;
	
	printf("Enter the first perpendicular edge: ");
	scanf("%f",&edge1);
	printf("Enter the second perpendicular edge: ");
	scanf("%f",&edge2);
	
	printf("\n");
	
	hipotenus=sqrt(edge1*edge1+edge2*edge2);
	circumference=edge1+edge2+hipotenus;
	area=(edge1*edge2)/2;
	
	printf("Hipotenus: %.2f\n",hipotenus);
	printf("circumference: %.2f\n",circumference);
	printf("area: %.2f\n",area);
	
	return 0;
}
