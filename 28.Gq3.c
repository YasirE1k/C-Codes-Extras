#include <stdio.h>
#include <stdlib.h>

int main() {

printf("Balance: 1000\n\n");

printf("**** PROCESS ****\n");
printf("1. Money Pulling\n");
printf("2. Money Investing\n");	
printf("3. Money Asking Balance\n");
printf("4. Card return\n");	

int process=0,theamountthatwantedtoinvest=0;
int theamountthatwantedtopull=0;
int processprice=5;
int balance=1000;
int balancelast=1000;

while(1){
printf("Choose your process: ");
scanf("%d",&process);

balance=balancelast;
switch(process){
	case 1: printf("Enter the amount that you want to pull: ");
			scanf("%d",&theamountthatwantedtopull);
			printf("New balance: %d\n",balance-theamountthatwantedtopull-processprice);
			balancelast=balance-theamountthatwantedtopull-processprice;
	break;
	case 2: printf("Enter the amount that you want to invest: ");
			scanf("%d",&theamountthatwantedtoinvest);
			printf("New balance: %d\n",balance-processprice+theamountthatwantedtoinvest);
			balancelast=balance-processprice+theamountthatwantedtoinvest;
	break;
	case 3: printf("balance: %d\n",balance-processprice);
			balancelast=balance-processprice;
	break;
	case 4: printf("Don't forget to take your card !\n");
			balancelast=balance-processprice;
	goto exit;
	break;
	}
	}
exit:
	return 0;
}




