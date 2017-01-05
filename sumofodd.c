#include<stdio.h>

int main()
{
  int i,j,sum = 0;
  printf("Enter the last number in the range:");
  scanf("%d",&i);

  for (j=0; j<=i; j++)
    {
      if (j%2 == 0)
	continue;
	sum = sum +j;
    }
  printf("The sum is %d\n",sum);
  return 0;
}
