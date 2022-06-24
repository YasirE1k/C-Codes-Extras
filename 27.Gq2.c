#include <stdio.h>
#include <stdlib.h>

int main() {
	int number1,number2,number3;
	printf("Enter 1. number: ");
	scanf("%d",&number1);
	printf("Enter 2. number: ");
	scanf("%d",&number2);
	printf("Enter 3. number: ");
	scanf("%d",&number3);
	
	if(number2>=number1 && number1>=number3){
	printf("Middle number: %d\n",number1);
	printf("Twice of the small number: %d",number3*2);
	}
	else if(number3>=number1 && number1>=number2){
	printf("Middle number: %d\n",number1);
	printf("Twice of the small number: %d",number2*2);
	}
	else if(number1>=number2 && number2>=number3){
	printf("Middle number: %d\n",number2);
	printf("Twice of the small number: %d",number3*2);
	}
	else if(number3>=number2 && number2>=number1){
	printf("Middle number: %d\n",number2);
	printf("Twice of the small number: %d",number1*2);
	}
	else if(number1>=number3 && number3>=number2){
	printf("Middle number %d\n",number3);
	printf("Twice of the small number: %d",number2*2);
	}
	else if(number2>=number3 && number3>=number1){
	printf("Middle number %d\n",number3);
	printf("Twice of the small number: %d",number1*2);
	}
	return 0;
}
