#include "main.h"

/**
 * _strchr - locates the location of the first occurence of a
 * character in a string.
 * @s: the string.
 * @c: the character.
 *
 * Return: the memory location to the first occurence of c.
 */
char *_strchr(char *s, char c)
{
	unsigned int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		if (*(s + count) == c)
			return (s + count);
		count++;
	}

	if (*(s + count) == c)
		return (s + count);
	return ('\0');
}
