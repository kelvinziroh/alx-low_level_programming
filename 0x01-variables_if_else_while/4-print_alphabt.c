#include <stdio.h>

/**
 * main - Print lowercase alphabets using putchar except
 * q and e
 *
 * Return: 0 if program executes successfully
 */
int main(void)
{
	int count = 0;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz\n";

	while (count < 27)
	{
		switch (alphabets[count])
		{
		case 'e':
		case 'q':
			count++;
			continue;
		default:
			putchar(alphabets[count]);
			count++;
		}
	}

	return (0);
}
