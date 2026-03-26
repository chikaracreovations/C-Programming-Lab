#include<stdio.h>
int main(){
int a,b,c;
printf("Enter three numbers:\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("Greatest is: %d\n",a);
else if(b>c)
printf("Greatest is: %d\n",b);
else
printf("Greatest is: %d\n",c);
return 0;
}