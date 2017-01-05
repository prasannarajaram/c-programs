#include <stdio.h>

int main()
{
  int i,j,sum = 0;
  printf("Enter the value of i (more than 5):");
  scanf("%d",&i);
  for (j=1; j<=i; j++)
    {
      if (j == 3)
	continue;
      sum = sum + j;
     }
 printf("The sum is %d",sum);  
return 0;
}
