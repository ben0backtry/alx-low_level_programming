#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 * @void: takes nothing
 *
 * Return: returns no arguments
 */
void print_alphabet_x10(void)
{
	int repeat;
	char letter;

	for (repeat = 0; repeat < 10; repeat++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
