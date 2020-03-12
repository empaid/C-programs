#include<stdio.h>
int a,b;
int main()
{
printf("Enter the number:");
scanf("%d",&a);
if(a>2)
{


for(b=2;b<a;b++)
{
if(a%b==0){
  printf("The number %d is not prime.",a);
  break;
}
  if(a-b==1)
  {
      printf("The number %d is  prime.",a);
  }

}
}
else
{

 printf("The number %d is undetermined.",a);
}
return 0;
}
