#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print the strings that passed through arguments
 * @separator: the commas
 * @n: the number of arguments
 * Return: return nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *S;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		S = va_arg(list, char *);
		if (S == NULL)
			printf("(nil)");
		else
			printf("%s", S);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
