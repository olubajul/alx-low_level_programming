#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *str;
	va_list list;

	va_start(list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
