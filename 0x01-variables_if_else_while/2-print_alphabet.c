#include <stdio.h>

/**
 * main - Print lowercase alphabets using putchar
 *
 * Return: 0 if program executes successfully
 */
int main(void)
{
	int count = 0;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz\n";

	while (count < 27)
	{
		putchar(alphabets[count]);
		count++;
	}

	return (0);
}
