#include <stdio.h>
#include <stdlib.h>
//The program that it finds the total of two matrix. 
int main() {
	int i,j,line,column;
	
	printf("Enter the line and column numbers of matrix: ");
	scanf("%d%d",&line,&column);
	
	int matrix[line][column];
	int matrixtotal;
	int matrix1[line][column];
	int matrix2[line][column];

	for(i=0;i<line;i++){
		for(j=0;j<column;j++){
		printf("Enter the [%d][%d] values of first matrix:",i,j);
		scanf("%d",&matrix1[i][j]);
		printf("Enter the [%d][%d] values of second matrix:",i,j);
		scanf("%d",&matrix2[i][j]);
		}
	}
	system("CLS");
	printf("The total of two matrix\n");
	for(i=0;i<line;i++){
		for(j=0;j<column;j++){
		matrixtotal=matrix1[i][j]+matrix2[i][j];
		printf("%d ",matrixtotal);
		}
	printf("\n");
	
	}
	return 0;
}
