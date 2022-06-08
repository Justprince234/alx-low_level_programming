#include "main.h"
/**
* main - Entry point
* a program that print _putchar, followed by a new line.
* Return: Always (Success)
*/
int main(void)
{
	char *firstVar = "_putchar";

	while (*firstVar)
	{
		_putchar(*firstVar);
	firstVar++;
	}
	_putchar('\n');
return (0);
