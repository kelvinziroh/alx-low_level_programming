#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: prefix.
 * @accept: accepted bytes.
 * Return: number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int is_accepted;

	i = 0;
	while (*(s + i) != '\0')
	{
		is_accepted = 1;

		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				is_accepted = 0;
				break;
			}
			j++;
		}
		if (is_accepted == 1)
			break;
		i++;
	}
}
