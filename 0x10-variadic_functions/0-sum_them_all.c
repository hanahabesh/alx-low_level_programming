#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - variadic function to summ all the arguments
 * @n: number of the arguments
 * @...: indefinite number of argument
 * Return: retuen the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lists;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(lists, n);

	for (i = 0; i < n; i++)
		sum += va_arg(lists, unsigned int);
	va_end(lists);
	return (sum);
}
