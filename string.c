#include <stdio.h>
#include <string.h>
# define MAX 20
int main()
{
  char s1[MAX], s2[MAX];
  printf("Enter s1: ");
  scanf("%s",s1);
  printf("Enter s2: ");
  scanf("%s",s2);
  printf("S1 is %s\n",s1);
  printf("S2 is %s\n",s2);
  // string concatenation
  strcat(s1,s2);
  printf("S1 is %s\n",s1);
  // string copy
  strcpy(s1,s2);
  printf("S1 is %s\n",s1);
  // find the length of the string
  int a = strlen(s1);
  printf ("Length of S1 is %d\n", a);
  int b = strlen(s2);
  printf ("Length of S2 is %d\n", b);
  // string comparison
  int c;
  c = strcmp(s1, s2);
  printf("C is %d\n",c);
  if (c==0)
    printf("S1 = S2\n");
  else if (c<0)
    printf("S1<S2\n");
  else 
  printf("S1>S2\n");
  return 0;
}
