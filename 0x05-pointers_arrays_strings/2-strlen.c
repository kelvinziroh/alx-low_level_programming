#include "main.h"

/**
 * _strlength - Computes the length of a string.
 * @s: pointer variable to the string.
 *
 * Return: integer representing length of a string.
 */
int _strlength(char *s)
{
	int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
