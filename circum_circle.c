#include<stdio.h>
 
int main() 
{
   float radius, circumference;
 
   printf("\nEnter the radius of Circle : ");
   scanf("%f", &radius);
 
   circumference = 2 * 3.14 * radius;
   printf("\nCircumference of Circle : %f\n", circumference);
 
   return (0);
}
