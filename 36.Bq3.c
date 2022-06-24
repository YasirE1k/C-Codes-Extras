#include <stdio.h>
#include <stdlib.h>

void converter(int enteredday,int *year,int *month,int *week,int *day){
	int leapyear=0;
	if(enteredday>=365*4){
	leapyear=enteredday/(365*4);
	}
	
	*year=enteredday/365;
	*month=(enteredday%365)/30;
	*week=(enteredday-((*year)*365)-((*month)*30))/7;
	*day=(enteredday-((*year)*365)-((*month)*30)-((*week)*7));
	*day=*day+leapyear;
	}

int main() {
	int dayentered=-1;
	int year, month, week, day;
	printf("******The program that converts entered day to year month week day******\n");

	while(dayentered<=0){
	printf("Please enter day number:");
	scanf("%d",&dayentered);
	if(dayentered==0 || dayentered<=0){
	printf("Please enter a positive number!\n");
		}
	}
	converter(dayentered,&year,&month,&week,&day);
	printf("Entered day value is %d year,%d month,%d week %d day",year,month,week,day);
	
	return 0;
}


