
#include<stdio.h>

int main() 
{
   float radius, area;
 
   printf("\nEnter the radius of Circle : ");
   scanf("%f", &radius);
	
   const float pi = 3.14;

   area = pi * radius * radius;
   printf("\nArea of Circle : %f\n", area);
 
   return (0);
}
