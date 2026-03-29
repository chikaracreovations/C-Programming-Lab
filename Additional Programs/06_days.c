#include <stdio.h>
int main(){
int d,y,m,r;
printf("Enter days: ");
scanf("%d",&d);
y=d/365;
r=d%365;
m=r/30;
r=r%30;
printf("Years: %d Months: %d Days: %d\n",y,m,r);
return 0;
}