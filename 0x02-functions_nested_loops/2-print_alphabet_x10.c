#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return:void
 */

void print_alphabet_x10(void)

{

	char c;

	int x = 0;



	while (x < 10)

	{

		c = 'a';

		while (c <= 'z')

		{

			_putchar(c);

			c++;

		}

		_putchar('\n');

		x++;

	}

}
