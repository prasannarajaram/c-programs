#include <stdio.h>

int x,y;
int main(void)
{
  for (x=0; x<=2; x++, printf("\n"))
    //    printf("\n");          
      for (y=0;y<=2; y++)
      printf("X ");  
  return 0;
}
