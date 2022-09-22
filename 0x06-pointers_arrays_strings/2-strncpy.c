#include "main.h"

/**
 * _strncpy - Copies a string.
 * @src: pointer variable for the source.
 * @dest: pointer variable for destination.
 * @n: amount of bytes from source.
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}

	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}

	return (dest);
}
