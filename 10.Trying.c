#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char word="john";
	
	switch(word){
		
		case word: printf("It found");
		break;
		case 5: printf("It wont write already");
		break;
		default: printf("It couldn't find");
		break;
	}
	
	return 0;
}
