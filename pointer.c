#include <stdio.h>
 
int main () 
{

   int n[10]; /* n is an array of 10 integers */
   int i,j;
   int *ptr = NULL;
   n[0] = 1000;
   ptr = &n[0]; 
   ptr++;
   /* initialize elements of array n to 0 */         
   for ( i = 1; i <= 10; i++ ) {
      n[i] = i + 100; /* set element at location i to i + 100 */
   }
   
   /* output each array element's value */
    for (j = 1; j <= 10; j++ ) {
      printf("Element[%d] = %d\n", j, *ptr++ );
    
   }
    // printf("The address of n[1] is %llu \n", ptr);
    // printf("The value of n[1] is %llu \n", *ptr);
   return 0;
}


