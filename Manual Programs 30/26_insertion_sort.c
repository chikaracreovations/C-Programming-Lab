
#include<stdio.h>
int main(){
int n,i,j,temp,key;
printf("Enter the No. of Elements:\n");
scanf("%d",&n);
int a[n];

printf("Enter the Elements: \n");
for(i=0;i<n;i++) 
scanf("%d",&a[i]);

for(i=1;i<n;i++){
key=a[i];
j=i-1;

while(j>=0&&a[j]>key){
    a[j+1]=a[j];
    j--;
}
a[j+1]=key;
}
printf("Sorted Array: ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
