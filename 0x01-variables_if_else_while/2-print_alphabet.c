#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char first_letter = 'a';

	while (first_letter <= 'z')
	{
		putchar(first_letter);
		first_letter++;
	}
	putchar('\n');

	return (0);
}
