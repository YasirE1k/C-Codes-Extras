#include <stdio.h>
#include <stdlib.h>

int main() {

   char city[]={'m','u','n','i','c','h'};
   char city1[]={'b','e','r','l','i','n'};
   char city2[]={'l','o','n','d','o','n'};

    int i;
    i=0;
    while(i<4)
    {
    printf("%s\n%s\n%s\n",city,city1,city2);
    i++;
    }
    
    return 0;
}
