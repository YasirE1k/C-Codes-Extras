#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mailsentmessage(char *mailadress,char *subjectcontent){
	int i=0;
	char name;
	char surname;
	char firstletterbigname[100];
	char firstletterbigsurname;
	char *smashfromdotandet=".@";
	
	char *word=strtok(mailadress,smashfromdotandet);
	char *word3=strtok(NULL,smashfromdotandet);
	word[0]=toupper(word[0]);
	word3[0]=toupper(word3[0]);
	
	char *word2=strtok(subjectcontent,"-");
	
	printf("%s named subject was transmitted to %s %s person",word2,word,word3);
}

int main() {
	
	int k=0,n=0,c=0,l=0,r=0;
	char eposta[100];
	char subjectmessage[100];
	int a=1;
	while(a){
		a=0;
		printf("Enter e-posta adress:");
		fgets(eposta,100,stdin);
		
		for(k=0;eposta[k]!='\0';k++){
		
		if(isdigit(eposta[k])){
			printf("Numeric values shouldn't be in your mail\n");
		a=1;	
		break;
		}
	}
	char *firstPassedPtr=strchr(eposta,'@');
	if(firstPassedPtr==NULL){
		printf("You didn't use @ in your email.\n");
		a=1;	
	}
}
	int b=1;
	while(b){
		b=0;
		printf("Enter subject and message:");
		fgets(subjectmessage,100,stdin);
	
	char *secondPassedPtr=strchr(subjectmessage,'-');
	
	for(c=0;subjectmessage[c]!='\0';c++){
		
		if(secondPassedPtr==NULL){
			printf("There isn't - in your sentence\n");
			b=1;
			break;
			}
	}
	char *thirdPassedPtr=strchr(subjectmessage,'"');
	
	if(thirdPassedPtr==NULL){
		printf("There isn't \" in your sentence\n");
		b=1;
		}
	if(thirdPassedPtr!=NULL){
		char *forthPassedPtr=strchr(thirdPassedPtr+1,'"');                   //Should I put +1 I am not sure, logically it is happening but
			if(forthPassedPtr==NULL){
			printf("There isn't second \" in your sentence\n");
		b=1;
		}
	}	
}
	mailsentmessage(eposta,subjectmessage);
	
	return 0;
}
