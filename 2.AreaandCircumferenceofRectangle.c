#include <stdio.h>
#include <stdlib.h>

int main() {
	float longedge,shortedge,area,circumference;
	
	longedge=10.6;
	shortedge=8.4;
	area=longedge*shortedge;
	circumference=2*(longedge+shortedge);
	
	printf("Area of rectangle: %f\n",area);
	printf("Circumference of the rectangle: %f",circumference);
	
	return 0;
}
