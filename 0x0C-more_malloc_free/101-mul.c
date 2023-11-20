#include <stdlib.h>
#include <stdio.h>
#include "main.h"

unsigned int _strlen(char *s);
int _isdigit(char c);
char *multiply(char *num1, char *num2);
char *add(char *num1, char *num2);

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(1, "Error\n", 6);
		exit(98);
	}
	char *result = multiply(argv[1], argv[2);

	if (result == NULL)
	{
		write(1, "Error\n", 6);
		exit(98);
	}
		write(1, result, _strlen(result));
		free(result);
	return (0);
}

unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len])
		len++;
	return (len);
}

int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

char *multiply(char *num1, char *num2)
{
	return (result);
}

char *add(char *num1, char *num2)
{
	return (result);
}
