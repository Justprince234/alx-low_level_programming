#include "main.h"
/**
*print_last_digit - print the last digit of a number
*@n: int type number
*Return: return value of last digit
*/
int print_last_digit(int a)
{
	int i;

	if (a < 0)
	{
		i = -1 * (a % 10);
		_putchar(i + '0');
		return (i);
	}
	else
	{
		i = a % 10;
		_putchar(i + '0');
		return (i);
	}
}
