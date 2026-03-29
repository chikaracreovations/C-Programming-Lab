#include <stdio.h>
int main(){
float b,h,d,g;
printf("Enter basic salary: ");
scanf("%f",&b);
h=0.2*b;
d=0.1*b;
g=b+h+d;
printf("Gross salary: %f\n",g);
return 0;
}