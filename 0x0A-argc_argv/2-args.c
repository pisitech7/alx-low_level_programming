#include <stdio.h>
#include "main.h"

/**
 * main -Entry point, prints all arguments it receives.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0 to indicate successfull completion.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
