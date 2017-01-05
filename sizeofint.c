#include <stdio.h>
#include <limits.h>

main() 
{
int size1;
size1 = sizeof(short);   
printf("Storage size for short : %d \n", size1);

int size2;
size2 = sizeof(int);   
printf("Storage size for int : %d \n", size2);

int size3;
size3 = sizeof(float);   
printf("Storage size for float : %dd \n", size3);
return 0;
}
