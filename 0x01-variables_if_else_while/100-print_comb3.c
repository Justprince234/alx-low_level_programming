#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int int_1, int_2, int_3;

	int_1 = 0;

	while (int_1 < 100)
	{
		int_2 = int_1 % 10; /* Remainder value */
		int_3 = int_1 / 10; /* doubles digit */

		if (int_3 < int_2)
		{
			putchar(int_3 + '0');
			putchar(int_2 + '0');

			if (int_1 < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}
