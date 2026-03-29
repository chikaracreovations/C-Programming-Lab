#include <stdio.h>
int main(){
int ch; float r,l,b;
printf("1.Circle 2.Rectangle\nEnter choice: ");
scanf("%d",&ch);
if(ch==1){
printf("Enter radius: ");
scanf("%f",&r);
printf("Area: %.2f\n",3.14*r*r);
}else{
printf("Enter l b: ");
scanf("%f%f",&l,&b);
printf("Area: %.2f\n",l*b);
}
return 0;
}