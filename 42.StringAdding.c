#include <stdio.h>
int main() {
char sentence_1[100];
char sentence_2[50];
printf("enter a sentence: ");
fgets(sentence_1, 50, stdin);
printf("Enter a sentence to add: ");
fgets(sentence_2, 50, stdin);
// add sentence_2 the last of sentence_1
string_add(sentence_1, sentence_2);
printf("second sentence, added to first sentence.\n\n");
puts(sentence_1);
return 0;
}

int character_number(const char *s) {
int i;
for (i = 0 ; s[i] != '\0' ; i++) {
/* Count without making process */
}
return i;
}
//string the name of initial adds the string the name of last.
void string_add(char *initial, const char *last) {
int initial_N = character_number(initial);
int last_N = character_number(last);
int i;
initial[initial_N-1]=' ';
for (i = 0 ; i < last_N ; i++)
initial[i+initial_N] = last[i];
initial[initial_N+last_N] = '\0';
}

