#include<stdio.h>
 
int main() 
{
   float l, w, perimeter;
 
   printf("\nEnter the length : ");
   scanf("%f", &l);
 
   printf("\nEnter the width : ");
   scanf("%f", &w);

 
   perimeter = 2 * (l + w);
   printf("\nPerimeter of rectangle : %f\n", perimeter);
 
   return (0);
}
