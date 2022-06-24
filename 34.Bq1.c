#include <stdio.h>
#include <stdlib.h>

void maxvalues(int array[],int size){
	int n=0;
	int max1=array[0];
	int max2=array[1];
	for(n=0;n<size-2;n++){
	
	if(array[n+2]>max1){
		max2=max1;
		max1=array[n+2];
						
	}else if(array[n+2]>max2 && array[n+2]<max1){
		
		max2=array[n+2];
	}
		}
printf("Max1 value:%d\n",max1);
printf("Max2 value:%d\n",max2);
printf("Max1 and Max2 values total:%d",max1+max2);
}
int main() {
	
	int elementnumber;
	int i;
	printf("Enter element number of array:");
	scanf("%d",&elementnumber);
	
	if(elementnumber>2){
		
	int numberarray[elementnumber];

	for(i=0;i<elementnumber;i++){
		
		printf("Enter array %d. element:",i+1);
		scanf("%d",&numberarray[i]);
	}
	
	maxvalues(numberarray,elementnumber);
	
	}else{
		printf("Array element number can't be small than 2");
	}

	return 0;
}
