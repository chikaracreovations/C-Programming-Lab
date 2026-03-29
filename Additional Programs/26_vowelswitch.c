#include <stdio.h>
int main(){
char c;
printf("Enter character: ");
scanf(" %c",&c);
switch(c){
case 'a':case 'e':case 'i':case 'o':case 'u': printf("Vowel\n"); break;
default: printf("Consonant\n");
}
return 0;
}