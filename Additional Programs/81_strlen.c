#include <string.h>

int main() {
    char myString[] = "Hello World";
    
   
    int length = strlen(myString);
    
    printf("The length of '%s' is %zu\n", myString, length);
    
    return 0;
}