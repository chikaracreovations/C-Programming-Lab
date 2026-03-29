#include <stdio.h>
#include <math.h> 


int isPrime(int n) {
    if (n <= 1) {
        return 0; 
    }
   
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d",&n);

    printf("Prime numbers between 1 and %d are: \n", n );

    
    for (int i = 1; i <=n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
