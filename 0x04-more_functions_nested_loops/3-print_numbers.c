#include "main.h"

/**
 * print_numbers - Print the numbers since 0 up to 9
 *
 * Return: The numbers since 0 up to 9
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10);
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
