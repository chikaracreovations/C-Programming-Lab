#include<stdio.h>
int main(){
int n,i,a[100],x,low=0,high,mid,flag=0;
printf("Enter size:\n");
scanf("%d",&n);
for(i=0;i<n;i++) scanf("%d",&a[i]);
printf("Enter element:\n");
scanf("%d",&x);
high=n-1;
while(low<=high){
mid=(low+high)/2;
if(a[mid]==x){ flag=1; break;}
else if(a[mid]<x) low=mid+1;
else high=mid-1;
}
if(flag) printf("Found\n");
else printf("Not found\n");
return 0;
}