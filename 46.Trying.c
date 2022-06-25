#include <stdio.h>
#include <stdlib.h>

void encryption(char *text1){

	char emptyarray[200];
	char newarray[100];	
	char t;
	int k=0,m=0;
	int counter=0;
	int i=0;
	int s=0;
	int r=0;
	int counter2=0;
	for(i=0;text1[i]!='\0';i++){
		
		k=text1[i];
		k=k+10;
		counter++;
			for(m=counter;m<counter+1;m++){
				t=k;
				newarray[m-1]=k;
		}
	}
		
	s=strlen(newarray);
		
	for(r=0;newarray[r]!=0;r++){
		
		if(islower(newarray[r]))
		counter2++;
	}
	
	sprintf(emptyarray," %s , %d , %d",newarray,s,counter2);

	printf("%s",emptyarray);
	
}
void decipher(char *text2){
	
	int s=0;
	int u=0;
	int counter3=0;
	int l=0;
	char p;
	char decipher[200];
	for(s=0;text2[s]='/0';s++){
		
		u=text2[s];
		u=u-10;
		counter3++;
			for(l=counter3;l<counter3+1;l++){
			p=l;	
			decipher[l-1]=p;	
		}
	}
}

int main() {
	char text[100];
	printf("Enter the text that you want to encryption:");
	fgets(text,100,stdin);
	encryption(text);
	printf("Encrypted text: %s",text);

	decipher(text);
	printf("deciphered text: %s",text);
	
	return 0;
}



