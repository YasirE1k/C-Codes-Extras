#include <stdio.h>
#include <stdlib.h>

int main() {
	int integer=6;
	double thefractionalnumberthatittakesupbigspace=7.2;
	char character='K';
	char characterarray[13]="John Asdfghi";
	float fractionalnumber=9.2;
	//sizeof(int) is independent from integer, for the others too
	printf("%d takes up space %d byte in the ram\n",integer,sizeof(int));
	printf("%lf takes up space %d byte in the ram\n",thefractionalnumberthatittakesupbigspace,sizeof(double));
	printf("%c takes up space %d byte in the ram\n",character,sizeof(char));
	// We know already that it took up space 13 byte, we aren't making with sizeof
	printf("%f takes up space %d byte in the ram",fractionalnumber,sizeof(float));
	
	return 0;
}
