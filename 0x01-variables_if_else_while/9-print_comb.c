#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 *
 * Description: A program that prints single numbers separated by a comma
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
