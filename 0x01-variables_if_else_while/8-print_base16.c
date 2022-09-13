#include <stdio.h>

/**
 * main - Print all characters from 0 to f
 *
 * Return: 0 if the program executes successfully
 */
int main(void)
{
	int count;

	count = 48;
	while (count < 58)
	{
		putchar(count);
		count++;
	}

	count = 97;
	while (count < 103)
	{
		putchar(count);
		count++;
	}
	putchar('\n');

	return (0);
}
