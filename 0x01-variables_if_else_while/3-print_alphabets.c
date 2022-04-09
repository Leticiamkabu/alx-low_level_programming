#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int lower;
	int upper;

	for (lower = 97; lower <= 122; lower++)
		putchar(lower);

	for (upper = 65; upper <= 90; upper++)
		putchar(upper);
	putchar('\n');

	return (0);
}
