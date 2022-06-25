/*
#include <stdio.h>
#include <stdlib.h>

//getchar()-putchar()-getche()-getch();
//Code1
int main() {
	
	char character;
	
	printf("Enter a character and press to enter:");
	character=getchar();
	printf("Entered character:");
	putchar(character);
	
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

//getchar()-putchar()-getche()-getch();
//Code2 
int main() {
	
	char character[10];
	
	printf("Enter a character and press to enter:");
	character[4]=getchar();
	printf("Entered character:");
	putchar(character[4]);
	
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

//getchar()-putchar()-getche()-getch();
//Code3 
int main() {
	
	char character;
	
	printf("Enter a character and press to enter:");
	character=getchar();
	printf("entered character:");
	printf("%c",character); //When I made with %c, it wrote something, it didn't write %s
							
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

//getchar()-putchar()-getche()-getch();
//Code4 

int main() {
	
	char character;
	
	character=getche();
	
	printf("John");
	
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

//getchar()-putchar()-getche()-getch();
//Code5 

int main() {
	
	char character;
	
	character=getche();
	printf("\n");
	printf("entered character:%c",character);
	
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

//getchar()-putchar()-getche()-getch();
//Code6 

int main() {
	//I thinked this in the first time, I think there isn't this using, the code didn't happen like I thinked already.
	char character;
	
	character=getche();
	printf("\n");
	printf("entered character:%c\n",character);
	getch(character);
	
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

//getchar()-putchar()-getche()-getch();
//Code7 

int main() {

	char character;
	
	character=getch();
	printf("\n");
	printf("entered character:%c\n",character);
	
	return 0;
}
*/

