#include<stdio.h>

int main()
{
  int i,j;
  float sum = 0, avg = 0.0;
  printf("Enter the last number in the range:");
  scanf("%d",&i);

  for (j=0; j<=i; j++)
    {
      if (j%2 != 0)
	continue;
	sum = sum +j;
    }
  avg = sum / j;
  printf("The sum is %.0f\n",sum);
  printf("The value of j is %d\n",j);
  printf("The average is %.2f\n",avg);
  return 0;
}
