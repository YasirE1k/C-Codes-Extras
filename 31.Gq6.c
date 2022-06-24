#include <stdio.h>
#include <stdlib.h>

int main() {
	int line;
	int	matrix[line][line];
	int i,j,k,m;
	while(line!=-1){
	printf("Enter line number:");
	scanf("%d",&line);
	if(line%2==0){
	printf("Please enter single number.\n");
	}
	else if(line%2!=0 && line!=-1){
	
	for(i=1;i<=line;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
		}
		
	for(k=1;k<=line;k++){
		for(m=line;m>k;m--){
			printf("*");
		}
	printf("\n");
}
}
}
	if(line==-1){
		printf("Exitted.");
	}

	return 0;
}
