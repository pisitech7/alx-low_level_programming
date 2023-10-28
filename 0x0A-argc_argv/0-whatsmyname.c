#include <stdio.h>
#include "main.h"

/**
 * main - A program that print its name.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: always zero to indicate successfull completion.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
