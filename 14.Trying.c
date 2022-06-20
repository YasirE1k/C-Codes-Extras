#include <stdio.h>
#include <stdlib.h>

struct john{
	
	char namesurname[50];
};

int main() {
	
	struct john z;
	
	z.namesurname[50]="emily";
	
	printf("%s",z.namesurname);
	
	return 0;
}
