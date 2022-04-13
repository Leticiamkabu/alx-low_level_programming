#include "main.h"

/**
 *  * print_alphabet - print alphabet lowercase
 *   *
 *    * Return: Always 0.
 */

void print_alphabet(void)
{
	int alphabet;
	int increment;

	for (increment = 0; increment < 10; increment++)
	{

		for (alphabet = 97; alphabet <= 122; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}

	_putchar('\n');

}
