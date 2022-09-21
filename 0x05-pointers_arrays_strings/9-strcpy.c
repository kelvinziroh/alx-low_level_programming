#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string in src location to memory location
 * dest.
 * @src: pointer to source memory location.
 * @dest: pointer to destination memory location.
 *
 * Return: The pointer to dest memory location.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
