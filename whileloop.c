/*#include <stdio.h>

main()
{
	int i=1;
	while (i<=5)
	{
		if (i==4)
			;
		printf("%d.i is less than 5 in while_loop\n",i);
		i++;
	}
	/*do
	{
		printf("%d.i is less than 5 in do_while_loop\n",i);
		i++;
	}
	while (i<=5);
	printf("The value of i is %d\n",i);*/
	return 0;		
}*/

#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a = 10;

   /* do loop execution */
   do {
   
      if( a == 15) {
         /* skip the iteration */
         a = a + 1;
         continue;
      }
		
      printf("value of a: %d\n", a);
      a++;
     
   } while( a < 20 );
 
   return 0;
}
	