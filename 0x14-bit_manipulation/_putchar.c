#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The character to print
 * Return: 1 on success,-1 on error , error number set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
