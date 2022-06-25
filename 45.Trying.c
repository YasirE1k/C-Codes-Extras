#include <stdio.h>
#include <stdlib.h>

void mailsent(char *mailadress,char *subjectcontent){
	int i=0;
	char name[100];
	char *smashfromdot=".";
	
	char *word=strtok(mailadress,smashfromdot);
	
	for(i=0;i<2;i++){
			name[1]=*word;
			printf("%s\n",word);
		
		word=strtok(NULL,smashfromdot);
	}
printf("Exitted ");
}

int main() {
	
	int k=0,n=0,c=0;
	char eposta[100];
	char subjectmessage[100];
	printf("Enter email adress:");
	scanf("%s",&eposta);
	
	for(n=0;n<eposta[k]!='\0';n++){
		
		while(isdigit(eposta[k])){
			printf("Numeric values shouldn't be in your mail");
			printf("Enter email adress:");
			scanf("%s",&eposta);
		}
	}
	
	char firstPassedPtr=strchr(eposta,'@');
	if(firstPassedPtr==NULL){
		printf("You didn't use @ in your email.");
	}
	printf("Enter subject and message:");
	scanf("%s",&subjectmessage);
	char secondPassedPtr=strchr(subjectmessage,'-');
	
	for(c=0;subjectmessage[c]!='\0';c++){
		
		if(secondPassedPtr==NULL){
			printf("There isn't - in your sentence");
			}
	maildsent(&eposta,&subjectmessage);
	
	return 0;
}
}
