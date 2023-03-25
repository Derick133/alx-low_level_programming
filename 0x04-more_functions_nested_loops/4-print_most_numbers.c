#include "main.h"

/**
 * print_most_numbers - Print the numbers since 0 up to 9
 * Discription: Prints the numbers excluding 2 and 4
 * Return: The numbers since 0 up to 9
 */

void print_most_numbers(void)

{
	int x = 0;

	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '9');
	}
	}
	_putchar('\n');
}

