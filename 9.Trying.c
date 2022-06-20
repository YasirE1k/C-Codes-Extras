#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int number = 0;
 
	clrscr();
 
 printf("\n Enter a number: ");
 scanf("%i",&number);
 fflush(stdin);
 
 printf("\n The number that you entered %i'dir",number);
 
 getch();
}
