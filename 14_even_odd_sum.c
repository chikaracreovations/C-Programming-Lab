#include<stdio.h>
int main(){
int n,i,even=0,odd=0;
printf("Enter n:\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(i%2==0) even+=i;
else odd+=i;
}
printf("Even sum: %d\n",even);
printf("Odd sum: %d\n",odd);
return 0;
}