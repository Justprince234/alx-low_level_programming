#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print all letters but the letter 'q' and 'e'.
 * Return: 0
 */
int main(void)
{
	char first_letter = 'a';

	while (first_letter <= 'z')
	{
		if (first_letter != 'q' && first_letter != 'e')
			putchar(first_letter);
		first_letter++;
	}
	putchar('\n');

	return (0);
}
