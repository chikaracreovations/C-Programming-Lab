#include<stdio.h>
int main(){
int a,b,t;
printf("Enter two numbers:\n");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("After swapping: %d %d\n",a,b);
return 0;
}