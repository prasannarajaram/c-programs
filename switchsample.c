#include<stdio.h>
main()
{
int select;
printf("Menu items \n");
printf(" 1. Bread \n 2. Butter\n 3. Jam\n 4. Milk \n 5. Others\n");
printf("Enter your choice \n");
scanf("%d",&select);
switch (select)
{
case 1:
printf("You selected Bread\n");
break;
case 2:
printf("You selected Butter\n");
break;
case 3:
printf("You selected Jam\n");
break;
case 4:
printf("You selected Milk\n");
break;
default:
printf("You selected Others\n");
break;
}
}


