#include <stdio.h>
#include <stdlib.h>

int main() {
	int i=0;
	int k=0;
	int n=0;
	int m=0;
	int t=0;
	int matrix[4][4]={1,5,3,9,7,4,88,334,32,55,33,22,44,33,22,44};
	int a;
	
	for(i=0;i<4;i++){
		for(t=0;t<3;t++){
			for(k=0;k<3;k++){
			
			if(matrix[i][k]<matrix[i][k+1]){
			a=matrix[i][k];
			matrix[i][k]=matrix[i][k+1];
			matrix[i][k+1]=a;		
		}
	}
	}
	}
for(n=0;n<4;n++){
	for(m=0;m<4;m++){
		printf("%d ",matrix[n][m]);
	}
	printf("\n");
}	
	return 0;
}

