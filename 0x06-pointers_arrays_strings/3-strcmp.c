#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer variable to first string.
 * @s2: Pointer variable to second string.
 *
 * Return:0 if s1 is equal to s2, a negative number
 * when first different character in s1 has a lower
 * ASCII value than correspondent character in s2, a
 * positive number when first differnt character in s1
 * has higher ASCII value.
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;
	int c = 0;

	while (c == 0)
	{
		if ((*(s1 + 1) == '\0') && (*(s2 + 1) == '\0'))
			break;
		c = *(s1 + 1) - *(s2 + count);
		count++;
	}

	return (c);
}
