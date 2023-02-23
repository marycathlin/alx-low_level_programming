#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int height, index;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			for (index = size - height; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < height; index++)
				_putchar('#');

			if (height == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

