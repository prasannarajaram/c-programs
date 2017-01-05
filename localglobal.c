	/* Demonstrating Global variables  */
	#include <stdio.h>
	int add_numbers( void );  //function declaration       /* ANSI function prototype */

	/* These are global variables and can be accessed by functions from this point on */
	int  value1, value2, value3;   // declaration of global variables
	int var1 = 5, var2 = 3, var3=1500;

	int delta( void )
	{
		auto int result;
		int var3 = 1000;
		result = value1 + value2 + value3;
		printf("The value of var3 from add_numbers() is %d\n",var3);
		return result;
	}
	
	main()
	{
		auto int result;
		int final_result;
		int var1 = 5, var2 = 3, var3;
		value1 = 10; //global variable
		value2 = 20; //global variable
		value3 = 30; //global variable	
		var3 = var1 + var2;	
		final_result = delta(); //calling function "add_numbers()"
		printf("The sum of %d + %d + %d is %d and var3 is %d\n",
			value1, value2, value3, final_result, var3);
	}
