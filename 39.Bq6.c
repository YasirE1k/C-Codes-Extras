#include <stdio.h>
#include <stdlib.h>

void encryption(char *text1){

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
				text1[m-1]=k;
			}
		}
	}
void decipher(char *text2){
	
	int s=0;
	int u=0;
	int counter3=0;
	int l=0;
	char p;
	char decipher1[100];
	for(s=0;text2[s]!='\0';s++){
		
		u=text2[s];
		u=u-10;
		counter3++;
			for(l=counter3;l<counter3+1;l++){
			p=u;	
			decipher1[l-1]=u;	
		}
	}
	strcpy(text2,decipher1);
}

int main() {
	char text[100];
	char emptyarray[200];
	int o=0,v=0;
	int counter2=0;
	printf("Enter the text that you want to encryption:");
	fgets(text,100,stdin);
	encryption(text);
	
	o=strlen(text);
	
	for(v=0;text[v]!='\0';v++){
		
		if(islower(text[v]))
		counter2++;
	}
	
	sprintf(emptyarray," %s , %d , %d",text,o,counter2);

	printf("Encriptioned text %s\n",emptyarray);
	
	decipher(text);
	printf("deciphered text: %s\n",text);

	return 0;
}


