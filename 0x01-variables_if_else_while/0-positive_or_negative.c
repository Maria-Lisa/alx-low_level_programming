#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - if loop
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

/* local variable definition */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* check the boolean expression */
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
