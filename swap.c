// This is a program to swap variables using pointers
// 
#include <stdio.h>
int swap (int *a, int *b);
int main()
{
	int i = 5,j = 10;
	swap (&i, &j);
	printf ("i is %d and j is %d\n", i,j);
	return 0;
}

int swap (int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	return (*a,*b);
}
