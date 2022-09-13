#include <stdio.h>

/**
 * main - Prints lowercase alphabets in reverse order
 *
 * Return: 0 if program executes successfully
 */
int main(void)
{
	int count;

	count = 122;
	while (count > 96)
	{
		putchar(count);
		count--;
	}
	putchar('\n');

	return (0);
}
