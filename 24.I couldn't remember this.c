#include <stdio.h>
#include <conio.h>
 
main(){
	int i,k,p=40,t,n;
	int counter=0;
	
	for(i=1;i<10;i++){
		counter=i*2;
		p=40;
		for(k=0;k<p;){
	
		printf(" ");
		counter+=2;
		p=40;
		p=p-counter;
			
	}
	for(t=1;t<=i;t++){
		printf("%d",t);
	}for(n=i-1;n>=1;n--){
		printf("%d",n);
	}
	printf("\n");
	
	counter=0;
	}
	
	return 0;
}
