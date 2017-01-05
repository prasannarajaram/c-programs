#include <stdio.h>

main()
{
  // This is a program to multiply two numbers a and b. The result will be stored in c

  // declaration of variables a,b & c 
  float a,b;
  double c;

  // getting inputs from the user  
  printf("Enter the value of multiplier: ");
  scanf("%f",&a);
  
  printf("Enter the value of multiplicand: ");
  scanf("%f",&b);
  
  //performing mathematical operation and storing the result in variable 'c'
  c = a * b;

  // printing the result on screen
  printf("The result is %f \n", c);
  return 0;

}
