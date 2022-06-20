#include <stdio.h>
#include <stdlib.h>

int g=20;
int main() {
	
	int g=10;
	{
	g=6;
	}
	printf("value of g = %d\n", g);
	return 0;
}
