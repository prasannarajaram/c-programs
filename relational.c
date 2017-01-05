#include<stdio.h>

main()
{
	int number;
	printf("Enter the number: ");
	scanf("%d",&number);
	if (number == 0)
		printf("The number is zero\n");		
	else if (number > 0)
		printf("The number is positive\n");
	else if (number == -1)		
		printf("The number is minus one (-1)\n");
	else		
		printf("The number is negative\n");
	return 0;
}

