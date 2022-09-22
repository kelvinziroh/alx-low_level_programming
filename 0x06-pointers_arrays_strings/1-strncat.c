#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @src: pointer variable to the source string.
 * @dest: pointer variable to the destination string.
 * @n: amount of bytes used from src.
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int count_2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count_2 < n)
	{
		*(dest + count) = *(src + count_2);
		if (*(src + count_2) == '\0')
			break;
		count++;
		count_2++;
	}
	return (dest);
}
