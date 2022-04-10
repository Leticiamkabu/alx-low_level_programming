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
	int counter;

	for (counter = 122; counter > 96; counter--)
		putchar(counter);

	putchar('\n');

	return (0);
}
