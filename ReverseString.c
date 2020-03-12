#include<stdio.h>
void main(){
    char strr[]="disha\0";
 int i,t,p;

 for ( i = 0; strr[i]!='\0' ; i++)
 {

 }
 i=i-1;

 t=0;
 while(t<i)
{
   p=strr[i];
   strr[i]=strr[t];
    strr[t]=p;
    i--;t++;


}

   printf("%s",strr);

}
