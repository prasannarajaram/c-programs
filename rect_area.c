
#include<stdio.h>
 
int main() 
{
   int area, l, w;
 
   printf("\nEnter the length : ");
   scanf("%d", &l);
 
   printf("\nEnter the width : ");
   scanf("%d", &w);

   area = l * w;
   printf("\nArea of rectangle : %d\n", area);
 
   return (0);
}
