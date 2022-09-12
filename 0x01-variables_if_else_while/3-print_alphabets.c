#include <stdio.h>

/**
 * main - Print lowercase and uppercase alphabets using putchar
 *
 * Return: 0 if program executes successfully
 */
int main(void)
{
	int count = 0;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";

	while (count < 53)
	{
		putchar(alphabets[count]);
		count++;
	}

	return (0);
}
