#include <stdio.h>
#include <stdlib.h>

int quotesCharacterLocations1(char *sentence){
	int i=0;
	int counter=0;
	int location1=0;
	
	for(i=0;sentence[i]!='\0';i++){
		
		if(sentence[i]=='"'){
		location1=i;
			
		counter++;
		
		if(counter==1){
			
			return location1;
			break;
		}
	}
	}
return -1;
}
	
int quotesCharacterLocations2(char *sentence){
	int i=0;
	int counter=0;
	int location2=0;
	
	for(i=0;sentence[i]!='\0';i++){
		
		if(sentence[i]=='"'){
		location2=i;
			
		counter++;
		
		if(counter==2){
			
			return location2;
			break;
		}
	}
	}
return -5;
}
	void findingquotation(char *thesamesentence){
	
	int k=0;
	
	if(quotesCharacterLocations1(thesamesentence)==-1 || quotesCharacterLocations2(thesamesentence)==-5){
		
		printf("It wasn't made the quotes in the sentence.\n");
	}else{
		printf("quotation sentence:\n");
		for(k=quotesCharacterLocations1(thesamesentence);k<=quotesCharacterLocations2(thesamesentence);k++){
		
		printf("%c",thesamesentence[k]);
		}	
	}
}

	int main() {
	
	char s[100];

	printf("Enter a sentence:");
	fgets(s,100,stdin);
	quotesCharacterLocations1(s);
	quotesCharacterLocations2(s);
	findingquotation(s);
	
	return 0;
}

