#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
