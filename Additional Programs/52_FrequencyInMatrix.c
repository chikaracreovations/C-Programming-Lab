#include<stdio.h>
int main(){
int n,i,j,k;
printf("Enter order:\n");
scanf("%d",&n);
int a[n][n],sum=0,freq=0,key;

printf("Enter Matrix: \n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);

printf("Enter No whose frequency is to be checked: ");
scanf("%d",&key);

for(i=0;i<n;i++){
    for(j=0;j<n;j++)
    if(a[i][j]==key) freq++;

}

printf("Frequency of %d in the array = %d",key,freq);
return 0;
}
