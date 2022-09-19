#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @str: pointer variable to string.
 *
 * Return: Nothing.
 */
void print_rev(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	while (count >= 0)
	{
		_putchar(str[count]);
		count--;
	}
}
