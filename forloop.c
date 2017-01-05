#include<stdio.h>
main()
{
int i,j;
printf("Enter the value of i: ");
scanf("%d",&i);

for (j=1;j<=i;)
{
printf("Counting %d\n",j);
j++;
}
}
