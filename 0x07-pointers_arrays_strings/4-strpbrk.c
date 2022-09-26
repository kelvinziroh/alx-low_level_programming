#include "main.h"

/**
 * _strpbrk - Searches for a string for any set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: memory location of byte in s that matches the bytes
 * in accept, Nothing if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
