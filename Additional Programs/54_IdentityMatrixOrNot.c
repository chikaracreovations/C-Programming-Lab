#include <stdio.h>

#include<stdio.h>
int main(){
int n,i,j,min,max;
printf("Enter order:\n");
scanf("%d",&n);
int a[n][n];
int flag1=1,flag2=1;

printf("Enter Matrix: \n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);

for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if (i == j && a[i][j] != 1) {
                flag1 = 0; 
            }
            if (i != j && a[i][j] != 0) {
                flag2 = 0; 
        
    }
    
    }   
    
}
  if (flag1 == 1 && flag2 == 1)
        printf("GIVEN MATRIX IS IDENTITY\n");
    else
        printf("GIVEN MATRIX IS NOT IDENTITY\n");

 
return 0;    
}
