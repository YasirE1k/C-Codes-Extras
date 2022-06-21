int main() {
int number=12;
int *theAdressOfTheNumber;
theAdressOfTheNumber=&number;

float fractionalNumber=5.7, *theAdressOfFractionalNumber;
double theBigFractionalNumber=7.8, *theAdressOfBigFractionalNumber;
char character='K',*theAdressOfCharacter;


printf("%d\n",number);
printf("%f\n",fractionalNumber);
printf("%lf\n",theBigFractionalNumber);
printf("%c\n",character);


printf("%x\n",theAdressOfTheNumber);                

printf("%x\n",theAdressOfFractionalNumber);
printf("%x\n",theAdressOfBigFractionalNumber);      
printf("%x\n",theAdressOfCharacter);            
   
return 0;
}
