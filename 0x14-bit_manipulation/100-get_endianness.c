#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness of the system
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int check = 1;
	char *endian_check = (char *)&check;

	if (*endian_check == 1)
		return (1);
	else
		return (0);
}
