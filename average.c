/*A program that reads in three numbers and prints their average*/ 

#include <stdio.h> 

main() { 
  float x,y,z;	
  printf("Enter a number: "); 
  scanf("%f",&x); 
  printf("Enter a second number: "); 
  scanf("%f",&y); 
  printf("Enter a third number: "); 
  scanf("%f",&z); 
  printf("The average is %f\n", (x+y+z)/3); 
}
