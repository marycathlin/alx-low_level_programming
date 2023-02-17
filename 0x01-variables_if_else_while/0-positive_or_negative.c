#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: 'print whether the number stored in the variable is positive or negative'
 * Return - Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zerro\n", n);
	}
	else
	{
		printf("%d isnegative\n", n);
	}
	return (0);
}

