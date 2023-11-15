#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...) 
{
	va_list args;
	char *str_arg;
	int int_arg;
	float float_arg;
	int i = 0;
	char c;

	va_start(args, format);

	while (format && format[i]) 
	{
	c = format[i];
	switch (c) 
	{
	case 'c':
	int_arg = va_arg(args, int);
	printf("%c", int_arg);
	break;
	case 'i':
	int_arg = va_arg(args, int);
	printf("%d", int_arg);
	break;
	case 'f':
	float_arg = (float)va_arg(args, double);
	printf("%f", float_arg);
	break;
	case 's':
	str_arg = va_arg(args, char*);
	if (str_arg == NULL) 
	{
	printf("(nil)");
	break;
	}
	printf("%s", str_arg);
	break;
 	default:
	break;
	}
	if ((format[i + 1] != '\0') && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
 	printf(", ");
	i++;
	}
	printf("\n");
	va_end(args);
}

