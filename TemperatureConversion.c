#include<stdio.h>

float ctof(float x);
float ftoc(float x);
float ctok(float x);
float ktoc(float x);
float ftok(float x);
float ktof(float x);
float d;




int main()
{
  int x;
  float v;
  printf("To convert celcius to fahrenheit\0331\n");
  printf("To convert fahrenheit to celcius\0332\n");
  printf("To convert celcius to kelvin\0333\n");
  printf("To convert kelvin to celsius\0334\n");
  printf("To convert kelvin to fahrenheit\0335\n");
  printf("To convert fahrenheit to degrees\0336\n");
    printf("Enter respective number required conversion : ");
    scanf("%d",&x );
    switch(x) {
      case 1:
      printf("Enter your temperature in celcius: ");
      scanf("%f",&v);
      d=ctof(v);
      printf("%f celcius in fahrenheit is %f\n\n\n\n",v,d);
      break;
      case 2:
      printf("Enter your temperature in farenheit: ");
      scanf("%f",&v);
      d=ftoc(v);
      printf("%f fahrenheit in celcius is %f\n\n\n\n",v,d);
      break;
      case 3:
      printf("Enter your temperature in celcius: ");
      scanf("%f",&v);
      d=ctok(v);
      printf("%f celcius in kelvin is %f\n\n\n\n",v,d);
      break;
      case 4:
      printf("Enter your temperature in kelvin: ");
      scanf("%f",&v);
       d=ktoc(v);
      printf("%f kelvin in celciusis %f\n\n\n\n",v,d);
      break;
      case 5:
      printf("Enter your temperature in kelvin: ");
      scanf("%f",&v);
      d=ktof(v);
      printf("%f kelvin in fahrenheit is %f\n\n\n\n",v,d);
      break;
      case 6:
      printf("Enter your temperature in farenheit: ");
      scanf("%f",&v);
      d=ftok(v);
      printf("%f fahrenheit in kelvin is %f\n\n\n\n",v,d);
      break;
      default:
        printf("enter valid number");
        main();
        break;
    }
    return 0;
    }






float ctof(float x)
  {
    float d;
    d=(x*1.8)+32;
    return d;
  }
  float ftoc(float x)
  {
    float d;
    d=(x-32)/1.8;
    return d;

  }
  float ctok(float x)
  {
    float d;
    d=x+273.15;
    return d;
  }
  float ktoc(float x)
  {
    float d;
    d=x-273.15;
    return d;
  }
  float ktof(float x)
  {
    float d;
    d=(x-273.15)*1.8+32;
    return d;
  }
  float ftok(float x)
  {
    float d;
    d=(x-32)/1.8+273.15;
    return d;
  }
