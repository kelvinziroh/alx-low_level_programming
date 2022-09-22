#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @src: pointer variable to source string.
 * @dest: pointer variable to destination string.
 *
 * Return: the dest pointer.
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int count_2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count_2 >= 0)
	{
		*(dest + count) = *(src + count_2);
		if (*(src + count_2) == '\0')
			break;
		count++;
		count_2++;
	}
	return (dest);
}
