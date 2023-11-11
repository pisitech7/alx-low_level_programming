#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
	switch (format[i])
	{
	case 'c':
	printf("%c", va_arg(args, int));
	break;
	case 'i':
	printf("%d", va_arg(args, int));
	break;
	case 'f':
	printf("%f", (float)va_arg(args, double));
	break;
	case 's':
	str = va_arg(args, char *);
	if (str == NULL)
	str = "(nil)";
	printf("%s", str);
	break;
	default:
	break;
	}
	if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || 
	format[i] == 's'))
	printf(", ");

	i++;
	}

	printf("\n");
	va_end(args);
	}

	int main(void)
	{
	print_all("cifs", 'H', 123, 3.14, "Hello");
	print_all("cifs", 'h', 0, 3.14, NULL);
	print_all("cifs", 'h', 123, 0, "World");

	return (0);
}
