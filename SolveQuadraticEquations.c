#include <stdio.h>
#include<math.h>
float a,b,c,d,e,f,g;
float quadratic();
 int main(){
                 printf("Quadractic Equation :  ax^2+bx+c=0\n");
                 printf("Enter number a: ");
                 scanf("%f",&a );
                  printf("Enter number b: ");
                 scanf("%f",&b );
                  printf("Enter number c: ");
                scanf("%f",&c );
            if(a!=0)
            {


                d=(b*b)-4*a*c;
                if(d>=0)
                {
                    quadratic();
                if(g==f){
                    printf("The Equation has Equal Roots %f",g);

                }
                else{
                    printf("The Equation has Unequal Roots %f and %f",g,f);
                }
        }
            else{
                printf("The Equation has Unreal  Roots ");
            }
            }
            else{
            g=-c*b;
            printf("The Equation is not quadratic with x=%f",g);
            }
  return 0;
}
float quadratic()
{
    e=sqrt(d);
    f=(-b+e)/2*a;
    g=(-b-e)/2*a;
    return 0;

}
