#include<stdio.h>
void main(){
  int num,space;
  printf("Enter number of rows to print :\t");
  scanf("%d",&num);
  space=num-1;
  for(int i=0;i<num;i++)
  {

      for(int t=0;t<space;t++)
   {

       printf(" ");
   } space--;
     for(int p=0;p<=i;p++)
        printf("* ");
     printf("\n");


  }

}
