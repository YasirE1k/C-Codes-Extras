#include <stdio.h>
#include <stdlib.h>

int main() {
	int line;
	int column;
	int i,j,k;
	printf("Enter the line number of the matrix:");
	scanf("%d",&line);
	printf("Enter the column number of the matrix:");
	scanf("%d",&column);
	int thevaluethatitwillrise=1;
	int continuevalue=1;
	
	for(i=1;i<=line;i++){
		for(j=1;j<=column;j++){
			thevaluethatitwillrise=continuevalue;
			
			for(k=2;k<thevaluethatitwillrise;k++){
				if(thevaluethatitwillrise%k!=0){
					thevaluethatitwillrise=thevaluethatitwillrise;
				}else{
				thevaluethatitwillrise=0;
				}
			}
			printf("%d ",thevaluethatitwillrise);
			continuevalue+=1;
			}
		printf("\n");
			}
		return 0;
}
