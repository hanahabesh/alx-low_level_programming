#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print any argument passed
 * @format: passed arg
 * Return: return nothing
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int i = 0, j, k = 0;
	char *s;
	const char arg1[] = "cifs";

	va_start(arg, format);
	while (format && format[i])
	{
		j = 0;
		while (arg1[j])
		{
			if (format[i] == arg1[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int)), k = 1;
					break;
				case 'i':
					printf("%d", va_arg(arg, int)), k = 1;
					break;
				case 'f':
					printf("%f", va_arg(arg, double)),
k = 1;
					break;
				case 's':
					s = va_arg(arg, char *), k = 1;
					if (!s)
					{
						s = "(nil)";
						printf("%s", s);
						break;
					}
					printf("%s", s);
					break;
		} i++;
	}
	printf("\n"), va_end(arg);
}
