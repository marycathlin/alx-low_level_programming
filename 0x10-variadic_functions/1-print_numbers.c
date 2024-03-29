#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int x;

	va_start(arg_list, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(arg_list, int));
		if (x < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(arg_list);
	printf("\n");
}

