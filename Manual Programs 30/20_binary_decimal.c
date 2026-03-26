#include<stdio.h>
#include<math.h>
int main(){
int n,dec=0,i=0,r;
printf("Enter binary:\n");
scanf("%d",&n);
while(n>0){
r=n%10;
dec+=r*pow(2,i);
n/=10;
i++;
}
printf("Decimal: %d\n",dec);
return 0;
}