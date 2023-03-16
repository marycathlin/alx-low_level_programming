#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2, concat_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		concat_len = len1 + len2;
	}
	else
		concat_len = len1 + n;

	concat = malloc(concat_len + 1);

	if (concat == NULL)
	{
		return (NULL);
	}
	memcpy(concat, s1, len1);
	memcpy(concat + len1, s2, concat_len - len1);

	concat[concat_len] = '\0';
	return (concat);
}
