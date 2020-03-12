#include<stdio.h>
void main(){
  int num;
  printf("Enter number of rows to print :\t");
  scanf("%d",&num);
  for(int i=0;i<num;i++)
  {



     for(int p=0;p<=i;p++)
        printf("* ");
     printf("\n");


  }

}
