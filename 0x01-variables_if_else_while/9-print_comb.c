#include <stdio.h>

/**
 * main - Print possible combinations of single digit numbers
 *
 * Return: 0 if program executes successfully
 */
int main(void)
{
	int count;

	count = 48;
	while (count < 58)
	{
		putchar(count);
		if (count != 57)
		{
			putchar(',');
			putchar(' ');
		}
		count++;
	}
	putchar('\n');
	return (0);
}
