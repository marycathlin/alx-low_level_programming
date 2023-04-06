#include "main.h"

/**
  * get_endianness - checks the endianness
  *
  * Return: if big_endian - 0, if little_endian - 1.
  */

int get_endianness(void)
{
	int val = 1;
	char *ptr = (char *)&val;

	if (*ptr == 1)
	{
		return (1);
	}
	else

	return (0);

}
