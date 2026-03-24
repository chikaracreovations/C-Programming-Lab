#include<stdio.h>
int main(){
float r;
printf("Enter radius:\n");
scanf("%f",&r);
printf("Area is: %.2f\n",3.14*r*r);
printf("Circumference is: %.2f\n",2*3.14*r);
return 0;
}