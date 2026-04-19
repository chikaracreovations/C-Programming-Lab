#include <string.h>
#include <stdio.h>

int main() {
    char String1[] = "Hello World";
    char String2[15];
    
   
   strcpy(String2,String1);
    
    printf("String 1 is  '%s' \n", String1);
    printf("String 2 is  '%s' \n", String2);
    
    return 0;
}