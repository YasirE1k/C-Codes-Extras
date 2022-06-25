#include <stdio.h>
#include <stdlib.h>

int Characterlocation(char *sentence){
	int i=0;
	int counter=0;
	int location;
	char starCharacter[1];
	starCharacter[0]='"';
	for(i=0;sentence[i]!='\0';i++){
		
		if(sentence[i]==starCharacter[0]){
		location=i;
			
		counter++;
		
		if(counter==1){
			
			return location;
			break;
		}
	}
	}
return -1;
}
	
int findingCharacter(char *thesamesentence){
	
	int k=0;
	int m=0,n=0,f=0;
	int counter1=0;
	int firstquotes=0, secondquotes=0;
	int wordArray[100];
	for(k=0;thesamesentence[k]!='\0';k++){
		
		if(thesamesentence[k]==thesamesentence[Characterlocation(thesamesentence)]){
			
			counter1++;
			if(counter1==1){
				firstquotes=k;
				
			}
			
			if(counter1==2){
				secondquotes=k;	
				break;
			}
		}
	}
	if(secondquotes==k){
		for(m=firstquotes+1,f=0;m<secondquotes;m++,f++){
		
		wordArray[f]=thesamesentence[m];
	}
	}
	if(secondquotes==k){
		char a = puts(wordArray);
		return a;
	
	}
	else{
	return 3;	
	}
	
}
int main() {
	
	char s[100];

	printf("Enter a sentence:");
	fgets(s,100,stdin);
	
	if(findingCharacter(s)!=3){
		printf("%s",findingCharacter(s));
		
	}else{
		printf("It wasn't made quotation in the sentence");
	}
	
		return 0;
}
