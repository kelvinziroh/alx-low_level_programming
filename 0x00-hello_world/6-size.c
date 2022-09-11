#include <stdio.h>

/**
 * main - Print out sizes of different types
 *
 * Return: 0 if program executes successfully
 */
int main(void)
{
	int i;
	char c;
	long int num;
	long long int big_num;
	float f;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(num));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)
			sizeof(big_num));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
