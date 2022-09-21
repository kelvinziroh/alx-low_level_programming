#include "main.h"

/**
 * puts2 - prints half of the characters in a string.
 * @str: input string parameter.
 *
 * Return: Nothing.
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}
