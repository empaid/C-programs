#include<stdio.h>
#include<math.h>
  int n,t,m,a=0,b=0,c;
  int fun();
  int best();
  int squaart();
int main()
{

  printf("enter the number:");
  scanf("%d",&n);
  c=n;
  fun();
  best();
  printf("binary for decimal number \t%d\t is \n\n\n\t\t%d\n\n\n",c,a);
   return 0;
}
int fun()
{
  t=n/2;
  m=n%2;

  a=a+(m*squaart(10,b));
  b=b+1;

return 0;
}
int best()
{
  if(t!=0)
  {
    n=t;
    fun();
    best();
  }

  return 0;

}
int squaart(int x,int y)
{
    int p,q=1;

    for(p=1;p<=y;p++)
{
    q=q*x;


}
return q;
}
