#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @src: Pointer variable for source.
 * @dest: Pointer variable for destination.
 * @n: bytes filled.
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		*(dest + count) = *(src + count);
		count++;
	}
	return (dest);
}
