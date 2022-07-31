#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

int field[80][23]={0};
int k,l;
int tailColumn[300];
int tailLine[300];

void gotoxy(short x, short y) {
	HANDLE hConsoleOutput;
	COORD Cursor_Pos = {x-1, y-1};

	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_Pos);
}

void frame(int x1,int y1,int x2,int y2,int type){
	int i,j;
	
	for(i=x1;i<=x2;i++){
		field[i][y1]=type;
		field[i][y2]=type;
	}
	for(j=y1;j<=y2;j++){
		
		field[x1][j]=type;
		field[x2][j]=type;
	}
}

void screenWrite(){
	int x,y;
	for(x=0;x<80;x++){
		for(y=0;y<23;y++){
			gotoxy(x+1,y+1);
			if(field[x][y]==2){
				printf("%c",176);
			}
		}
	}
}
	
int appointRandom(){
	srand(time(NULL));
	k=4+rand()%65;
	l=4+rand()%15;
}	

int main() {
	appointRandom();
	frame(0,0,79,22,2);
	screenWrite();
	
	int sx=40,sy=12;
	unsigned char button;             //when I made unsigned it moved 
	int dx=0;
	int dy=0;
	int a=0;
	int i;
	int continuee=1;
	do{
		
		if(kbhit()){
			button=getch();
			if(button==224){
				button=getch();
				switch(button){
					
					case 72: dy=-1;dx=0;
						break;
					case 80: dy=1;dx=0;
						break;
					case 77: dx=1;dy=0;
						break;
					case 75: dx=-1;dy=0;
						break;
				}
			}
		}
		sx=sx+dx;
		sy=sy+dy;	
		
		if(sx>78){
			sx=2;
		}
		if(sx<2){
			sx=78;
		}
		if(sy>22){
			sy=2;
		}
		if(sy<2){
			sy=22;
		}
		
		tailLine[0]=sy;
		tailColumn[0]=sx;
		
		for(i=1;i<=a;i++){
			
			if(sx==tailColumn[i] && sy==tailLine[i]){
				gotoxy(sx,sy);printf(" You Burned");
				getch();
				continuee=0;
			}
			
		}
		
		gotoxy(sx,sy);printf("*");
		
		for(i=0;i<=a;i++){
			gotoxy(tailColumn[i],tailLine[i]);printf("*");
			
		}
		
		if(sx==k && sy==l){
			appointRandom();
			a++;
			gotoxy(2,2);printf("Puan:%d",a);
		}
		gotoxy(k,l);printf("A");
		
		Sleep(60);
		gotoxy(sx,sy);printf(" ");	
			for(i=0;i<=a;i++){
			gotoxy(tailColumn[i],tailLine[i]);printf(" ");
			
		}
		
		for(i=a;i>0;i--){
			tailColumn[i]=tailColumn[i-1];
			tailLine[i]=tailLine[i-1];
		}
		
	}while(continuee==1);
	
	return 0;
}


