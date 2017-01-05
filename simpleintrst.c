#include <stdio.h>

main()
{
int p,n,r;
float si,amount;
printf("Enter P: ");
scanf("%d", &p);
printf("Enter N: ");
scanf("%d", &n);
printf("Enter R: ");
scanf("%d", &r);

si = (p * n * r)/100;
amount = si + p;

printf("SI is %f \n", si);
printf("Amount is %f \n", amount);

return 0;
}


