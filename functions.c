//program to use functions
#include <stdio.h>

int add(int a,int b); //function declaration
int mul(int a,int b); //function declaration

main()
{
	int i,j,result1,result2;
	i = 5;
	j = 6;
	result1 = add(i,j);
	result2 = mul(i,j);
	printf("The sum is %d\n",result1);
	printf("The product is %d\n",result2);
	// goto place;
	return 0;
/* place:
{
  printf("This is a label\n");
  return 0;
}*/
}
// function definition
int add(int a,int b)
{
	int c;
	c = a + b;
	return (c);
}

// function definition
int mul(int a,int b)
{
	int c;
	c = a * b;
	return (c);
}

