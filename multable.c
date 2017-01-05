#include<stdio.h>

main()
{
	int i,j,k,product;
	i = 5;
	k = 10;
	for (j=1;j<=k;j++)
	{
	product = i * j;
	printf("%d X %d = %d \n", i,j,product); 
	}
	return 0;
}

