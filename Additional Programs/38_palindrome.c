#include <stdio.h>
int main(){
int n,t,r,rev=0;
printf("Enter number: ");
scanf("%d",&n);
t=n;
while(n>0){
    r=n%10; 
    rev=rev*10+r; 
    n/=10;}
if(t==rev) 
printf("Palindrome\n");
else 
printf("Not palindrome\n");
return 0;
}