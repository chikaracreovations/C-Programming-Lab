#include<stdio.h>
int main(){
int a,b,c,d,e,sum;
float per;
printf("Enter marks of 5 subjects:\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
per=sum/5.0;
printf("Total marks is: %d\n",sum);
printf("Percentage is: %.2f\n",per);
return 0;
}