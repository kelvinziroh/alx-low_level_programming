#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: input string.
 *
 * Return: s.
 */
char *leet(char *s)
{
	int count = 0;
	int i;
	int arr1[] = {97, 101, 111, 116, 108};
	int arr2[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		i = 0;
		while (i < 5)
		{
			if (*(s + count) == arr1[i] || *(s + count) == arr2[i])
			{
				*(s + count) = numbers[i];
				break;
			}
			i++;
		}
		count++;
	}
	return (s);
}
