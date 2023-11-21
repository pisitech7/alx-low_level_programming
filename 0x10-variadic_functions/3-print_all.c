#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
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
	printf("(nil)");
	else
	printf("%s", str);
		break;
	default:
	break;
	}
	if ((format[i + 1] != '\0') && (format[i + 1] == 'c' || format[i + 1] == 'i' ||
           format[i + 1] == 'f' || format[i + 1] == 's'))
	printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}

