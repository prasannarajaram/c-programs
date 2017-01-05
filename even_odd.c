#include<stdio.h>

main()
{
	int number;
	printf("Enter the number: ");
	scanf("%d",&number);
	if (number%2 == 0)
		{		
		printf("The number is even\n");
		printf("Even numbers are factors of 2\n");
		}
	else
		{		
		printf("The number is odd\n");
		printf("Odd numbers are NOT factors of 2\n");
		}
	return 0;
}

