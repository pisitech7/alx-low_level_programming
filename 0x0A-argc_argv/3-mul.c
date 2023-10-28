#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point,print the result of the multiplication of two numbers.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0 to indicate successfull completion.
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
