#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: pointer variable of the string to be reversed.
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int count, a, b;
	char *str, temp;

	count = 0;
	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	str = s;
	count--;
	a = 0;
	while (a < count)
	{
		b = a + 1;
		while (b > 0)
		{
			temp = *(str + b);
			*(str + b) = *(str + (b - 1));
			*(str + (b - 1)) = temp;
			b--;
		}
		a++;
	}
}
