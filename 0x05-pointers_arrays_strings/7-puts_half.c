#include "main.h"

/**
 * puts_half - prints second half of a string.
 * @str: input string parameter.
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int count = 0;
	int starting_point;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	if (count % 2 == 1)
		starting_point = count / 2;
	else
		starting_point = (count - 1) / 2;

	starting_point++;
	while (starting_point < count)
	{
		_putchar(str[starting_point]);
		starting_point++;
	}
	_putchar('\n');
}
