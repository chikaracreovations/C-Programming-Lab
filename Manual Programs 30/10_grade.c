#include<stdio.h>
int main(){
int m1,m2,m3,m4,m5,sum;
float per;
printf("Enter marks of 5 subjects:\n");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
sum=m1+m2+m3+m4+m5;
per=sum/5.0;
if(per>=90) printf("Grade A\n");
else if(per>=80) printf("Grade B\n");
else if(per>=60) printf("Grade C\n");
else printf("Grade D\n");
return 0;
}