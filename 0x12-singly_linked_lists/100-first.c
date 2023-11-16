#include <stdio.h>

/* Function to print the required text */
void before_main_execution(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
/* Main function */
int main(void)
{
	/* Call the function before executing main */
	before_main_execution();
	printf("This is the main function executing.\n");
	return (0);
}
