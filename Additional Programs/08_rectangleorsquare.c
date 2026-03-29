#include <stdio.h>
int main(){
float l,b,s;
printf("Enter length and breadth: ");
scanf("%f%f",&l,&b);
printf("Perimeter: %f\n",2*(l+b));
printf("Enter side of square: ");
scanf("%f",&s);
printf("Area of square: %f\n",s*s);
return 0;
}