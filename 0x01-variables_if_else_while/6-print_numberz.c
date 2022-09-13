#include <stdio.h>

/**
 * main - Print integers from 0 to 9
 *
 * Return: 0 if program runs successfully
 */
int main(void)
{
	int count;

	for (count = 48; count < 58; count++)
	{
		putchar(count);
	}
	putchar('\n');

	return (0);
}
