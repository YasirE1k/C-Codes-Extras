#include <stdio.h>
#include <stdlib.h>

//students[0]={"Oliver Smith",1,2.30}; shape I made something It didn't happen Let me try with strcpy, lets look 
//What he wants the part of to put to the proper space, I couldn't understand completely, When I make 10 instead of 9, it is happening actually, but I don't know
struct studentsaving{
	
	char namesurname[50];
	int classs;
	float average;
};

void addwiththequeue(struct studentsaving *newstudentt,struct studentsaving *allofthestudent){
	
	int i=0,j=0,k=0,m=0;
	int s=0,r=0;
	for(j=0;j<9;j++){
		for(i=0;i<9;i++){
		
			if(allofthestudent[i].classs<=allofthestudent[i+1].classs){
			allofthestudent[14]=allofthestudent[i];
			allofthestudent[i]=allofthestudent[i+1];
			allofthestudent[i+1]=allofthestudent[14];
			}
		}
	}
	for(k=0;k<9;k++){
		for(m=0;m<9;m++){
			if(allofthestudent[m].classs==allofthestudent[m+1].classs){
				if(allofthestudent[m].average<=allofthestudent[m+1].average){
					
				allofthestudent[13]=allofthestudent[m];
				allofthestudent[m]=allofthestudent[m+1];
				allofthestudent[m+1]=allofthestudent[13];
				}
			}
		}
	}
}

int main() {
	
	struct studentsaving students[15];
	int l=0;
	
	strcpy(students[0].namesurname,"Oliver Smith");
	students[0].classs=1;
	students[0].average=2.30;
	
	strcpy(students[1].namesurname,"Jack Jones");
	students[1].classs=3;
	students[1].average=3.59;
	
	strcpy(students[2].namesurname,"Harry Williams");
	students[2].classs=2;
	students[2].average=2.80;
	
	strcpy(students[3].namesurname,"Amelia Brown");
	students[3].classs=4;
	students[3].average=0.70;
	
	strcpy(students[4].namesurname,"Olivia Taylor");
	students[4].classs=4;
	students[4].average=2.44;
	
	strcpy(students[5].namesurname,"Isla Davies");
	students[5].classs=4;
	students[5].average=2.62;
	
	strcpy(students[6].namesurname,"Thomas Wilson");
	students[6].classs=2;
	students[6].average=0.65;
	
	strcpy(students[7].namesurname,"George Evans");
	students[7].classs=1;
	students[7].average=1.71;
	
	strcpy(students[8].namesurname,"Oscar Thomas");
	students[8].classs=3;
	students[8].average=0.66;
	
	strcpy(students[9].namesurname,"Sophie Roberts");
	students[9].classs=1;
	students[9].average=1.99;
	
	printf("Enter the name and surname of the student:");
	fgets(students[10].namesurname,50,stdin);
	printf("Enter the class:");
	scanf("%d",&students[10].classs);
	printf("Enter average:");
	scanf("%f",&students[10].average);
	
	addwiththequeue(&students[10],students);
	
	printf("namesurname                                classs                         average\n");
	for(l=0;l<11;l++){
		
		printf("%-30s		%-10d		%10.2f\n",students[l].namesurname,students[l].classs,students[l].average);
	}
	
	return 0;
}


