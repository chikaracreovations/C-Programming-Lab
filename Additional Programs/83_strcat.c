#include <string.h>
#include <stdio.h>

int main() {
    char String1[] = "Hello " ;
    char String2[] ="World!";
    
   
    printf("String 1 is  '%s' \n", String1);
    printf("String 2 is  '%s' \n", String2);
    strcat(String1,String2);
printf("String 1 + String 2 is  '%s' ", String1);
   
    
    return 0;
}