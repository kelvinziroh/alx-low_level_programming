#include <stdio.h>

/**
 * main - Print integers below 10 starting from 0 in a line
 *
 * Return: 0 if program executes successfully
 */
int main(void)
{
	int count = 0;

	while (count < 10)
	{
		printf("%d", count);
		count++;
	}
	printf("\n");
	return (0);
}
