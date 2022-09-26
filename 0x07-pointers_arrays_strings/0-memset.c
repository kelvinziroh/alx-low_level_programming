#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory location.
 * @b: constant byte.
 * @n: bytes filled.
 *
 * Return: memory location (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		*(s + count) = b;
		count++;
	}
	return (s);
}
