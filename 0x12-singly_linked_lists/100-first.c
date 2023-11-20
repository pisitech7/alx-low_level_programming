#include <stdio.h>

/* Function to print a specific statement before main()*/
void print_statement(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

/* Main function */
int main(void)
{
	/* Call the function to print the statement before the main function */
	print_statement();
	/* Rest of your main code goes here */
	printf("This is the main function executing.\n");
	return (0);
}

