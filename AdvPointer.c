#include <stdio.h>

 int multi[2][4]; // This is a multidimensional array with 8 elements
  // | 2 4 6 8 |
  // | 3 6 9 12|
  // The above shows an array (matrix) of size [2]X[4].
  // In short this shows a two element array. The first element is the first row with 4 elements (Eg: multiples of 2)
  // The second row is another element  with 4 elements (Eg: multiples of 3)
 int main()
 {
   printf("Printing the address of the first element of the array -\"multi\"\n");
   printf("multi = %lu\n",(unsigned long)multi);              // points to the address of the first element in the array
   printf("multi[0] = %lu\n",(unsigned long)multi[0]);        // points to the address of the first element in the array
   printf("&multi[0][0] = %lu\n",(unsigned long)&multi[0][0]);// points to the address of the first element in the array

   printf("Printing the size of the array -\"multi\"\n");
   printf("the size of multi = %u\n",sizeof(multi));              // points to the address of the first element in the array
   printf("the size of multi[0] = %u\n",sizeof(multi[0]));        // points to the address of the first element in the array
	  printf("the size of multi[0][0] = %u\n",sizeof(multi[0][0]));// points to the address of the first element in the array

   return 0;
 }
