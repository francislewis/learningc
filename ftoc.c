#include <stdio.h> 

main() { 
  float x;	
  printf("Enter a temperature in Fahrenheit: "); 
  scanf("%f",&x); 
  printf("In celsius, the temperature is %f\n", ((x-32)*5)/9); 
}

