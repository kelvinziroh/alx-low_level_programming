#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 *
 * Return: s.
 */
char *cap_string(char *s)
{
	int count = 0;
	int i;
	int word_separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + count) >= 97 && *(s + count) <= 122)
		*s(s + count) = *(s + count) - 32;

	count++;
	while (*(s + count) != '\0')
	{
		i = 0;
		while (i < 13)
		{
			if (*(s + count) == word_separators[i])
			{
				if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))
					*(s + (count + 1)) = *(s + (count + 1)) - 32;
				break;
			}
			i++
		}
		count++;
	}
	return (s);
}
