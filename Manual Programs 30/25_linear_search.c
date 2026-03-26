#include<stdio.h>
int main(){
int n,i,a[100],x,flag=0;
printf("Enter size:\n");
scanf("%d",&n);
for(i=0;i<n;i++) scanf("%d",&a[i]);
printf("Enter element to search:\n");
scanf("%d",&x);
for(i=0;i<n;i++){
if(a[i]==x){ flag=1; break;}
}
if(flag) printf("Found\n");
else printf("Not found\n");
return 0;
}