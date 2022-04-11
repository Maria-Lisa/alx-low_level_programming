#include <stdio.h>
#include <ctype.h>
/**
 * main - putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
		putchar("\n");
	}
	return (0);
}
