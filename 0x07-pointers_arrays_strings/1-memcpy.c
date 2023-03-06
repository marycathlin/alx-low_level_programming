#include "main.h"

/**
  *_memcpy - copies n from memory area src to dest
  * @src: memory area to coppy from
  * @dest: memory area to copy to
  * @n: number of bytes copied from src to dest
  *
  * Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}

