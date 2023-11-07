#include <stdio.h>

/**
 * main -  a program that prints the name of the file it was compiled from
 *
 * Return: always 0 to indicate succesful compilatiion
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
