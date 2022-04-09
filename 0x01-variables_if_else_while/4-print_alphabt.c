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

	for (lower = 97; lower <= 122; lower++)
		if (lower == 101 || lower == 113)
		{
			lower++;
		}
		else
		{
			putchar(lower);
		}

	putchar('\n');

	return (0);

}
