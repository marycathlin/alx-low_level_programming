#include "main.h"

/**
  * get_bit - Gets the value of the bit at a specified index
  * @n: The bit.
  * @index: The index to get the value at - indices start at 0.
  *
  * Return: if an error occurs - -1
  *       otherwise - the value of abit at index
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	if ((n & (1 << index)) == 0)
	{
		return (0);
	} else
		return (1);
}

