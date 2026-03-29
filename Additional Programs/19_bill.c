#include <stdio.h>
int main(){
int u; float bill;
printf("Enter units: ");
scanf("%d",&u);
if(u<=100) bill=u*1;
else if(u<=200) bill=100+(u-100)*2;
else bill=300+(u-200)*3;
printf("Bill: %f\n",bill);
return 0;
}