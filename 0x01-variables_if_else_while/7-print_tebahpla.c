#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 *
 * Description: Aprogram that prints lowercase letters in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)

		putchar(alpha);

	putchar('\n');

	return (0);
}
