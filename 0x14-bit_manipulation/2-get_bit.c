#include "main.h"

/**
  * get_bit - Returns the value of the bit at a specified index
  * @n: unsigned int
  * @index: index unsigned int
  *
  * Returns: -1 when error occurs, otherwise - the value of the bit at index
  *
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

