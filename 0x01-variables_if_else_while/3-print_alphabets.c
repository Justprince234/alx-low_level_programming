#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */
int main(void)
{
	char first_letter  = 'a';

	while (first_letter <= 'z')
	{
		putchar(first_letter);
		first_letter++;
	}

	first_letter = 'A';

	while (first_letter <= 'Z')
	{
		putchar(first_letter);
		first_letter++;
	}

	putchar('\n');

	return (0);
}
