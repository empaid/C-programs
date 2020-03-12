#include<stdio.h>
float a,t,m=0,n;

int main(){
printf("enter your numbers (if you want to end then put a=0)\n");
scanf("%f",&a);
for (t=0;a!=0;t++)
{
m=m+a;
scanf("%f",&a);

}
n=m/t;
printf("your average is%f",n);
return 0;
}
