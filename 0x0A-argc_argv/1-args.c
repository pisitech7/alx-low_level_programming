#include <stdio.h>
#include "main.h"

/**
 * main - Entry point, prints the number of arguments passed into it.
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments.
 *
 * Return: Always zero to indicate successfull completion
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
