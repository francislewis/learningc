#include <stdio.h> 

main() { 
  float x;	
  printf("Enter a temperature in celsius: "); 
  scanf("%f",&x); 
  printf("In Fahrenheit the temperature is %f\n", ((x*9)/5)+32); 
}
