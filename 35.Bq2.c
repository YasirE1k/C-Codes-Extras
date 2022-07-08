#include <stdio.h>
#include <stdlib.h>

void functionmatrix1(int startingvalue1,int thematrix1thatitwillthrowedtofunction[100][100]){
	int a,b;
	int counter1=0;
	for(a=0;a<100;a++){
		for(b=0;b<100;b++){
			if(startingvalue1==thematrix1thatitwillthrowedtofunction[a][b]){
				
				printf("matrix %d %d starting dot array was found\n",a,b);
			counter1++;
			}
		}
	}
if(counter1==0){
	printf("There aren't in the matrix");
}
}
void functionmatrix2(int startingvalue2,int thematrix2thatitwillthrowedtofunction[100][100]){
	
	int c,d;
	int counter2=0;
	for(c=0;c<100;c++){
		for(d=0;d<100;d++){
			if(startingvalue2==thematrix2thatitwillthrowedtofunction[c][d]){
				
			printf("matrix %d %d starting dot array was found\n",c,d);
			counter2++;
			}	
		}
	}
if(counter2==0){
	printf("There aren't in the matrix");
}
}
int main() {
	int matrixLine,matrixColumn;
	int i,k,m,n,t;
	int arraysize1[100];
	int arraysize2[100][100];
	
	printf("Enter matrix line and column with queue:");
	scanf("%d %d",&matrixLine,&matrixColumn);
	
	int matrix[matrixLine][matrixColumn];
	
	for(i=0;i<matrixLine;i++){
		for(k=0;k<matrixColumn;k++){
			printf("Enter matrix %d. line %d. column value:",i,k);
			scanf("%d",&matrix[i][k]);
			
			while(matrix[i][k]>99 || matrix[i][k]<-99){
				printf("Matrix elements can be most 2 digits, enter the new value:");
				scanf("%d",&matrix[i][k]);
			}
		}
	}
	int arraysize;
	printf("Enter array size:");
	scanf("%d",&arraysize);
		
	while(arraysize>2){
		
		printf("Please enter most 2 size array:");
		scanf("%d",&arraysize);
	}	
		
	if(arraysize==1){
		
		printf("Enter the 1 size array values that it will searched in the matrix with the queue:");
		for(m=0;m<matrixLine;m++){
			scanf("%d",&arraysize1[m]);
		}
		functionmatrix1(arraysize1[0],matrix);
	}else if(arraysize==2){
		
		printf("Enter the 2 size array values that it will searched in the matrix with the queue:");
		for(n=0;n<2;n++){
			for(t=0;t<2;t++){
				
				scanf("%d",&arraysize2[n][t]);
			}
		}
	functionmatrix2(arraysize2[0][0],matrix);
	}
	
	return 0;
}
