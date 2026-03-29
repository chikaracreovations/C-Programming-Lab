#include <stdio.h>
int main(){
int ch; float c,f;
printf("1.C to F 2.F to C\nEnter choice: ");
scanf("%d",&ch);
if(ch==1){
scanf("%f",&c);
printf("%.2f\n",(c*9/5)+32);
}else{
scanf("%f",&f);
printf("%.2f\n",(f-32)*5/9);
}
return 0;
}