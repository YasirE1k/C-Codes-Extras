#include <stdio.h>
#include <stdlib.h>

struct topleftbottomrightcoordinateknowledges{
	
	float topleftx;
	float toplefty;
	float bottomrightx;
	float bottomrighty;
};

void taketothecenter(struct topleftbottomrightcoordinateknowledges *a1){
	float newxpositive,newypositive,newxnegative,newynegative;
	newxpositive=(fabs((*a1).topleftx)+fabs((*a1).bottomrightx))/2;
	newypositive=(fabs((*a1).toplefty)+fabs((*a1).bottomrighty))/2;

	newxnegative=-newxpositive;
	newynegative=-newypositive;
	
	(*a1).topleftx=newxnegative;
	(*a1).toplefty=newypositive;
	(*a1).bottomrightx=newxpositive;
	(*a1).bottomrighty=newynegative;
	
}

int main() {
	struct topleftbottomrightcoordinateknowledges a1;
	
	printf("Enter Recrangle top left and bottom right coordinate knowledges:");
	scanf("%f %f %f %f",&a1.topleftx,&a1.toplefty,&a1.bottomrightx,&a1.bottomrighty);
	
	taketothecenter(&a1);
	
	printf("After Center of gravity happened origin coordinate values:\n");
	printf("top left x, top left y, bottom right x, bottom right y: %.1f %.1f %.1f %.1f",a1.topleftx,a1.toplefty,a1.bottomrightx,a1.bottomrighty);
	
	return 0;
}



