#include "main.h"

/**
 * print_character - prints a specific character
 * @c: the character to be printed
 * @len: pointer to an int
 * Return: void
 */

void print_character(void *c, int *len)
{
	uintptr_t r = (uintptr_t)c;

	if (r)
	{
		_putchar(r);
		*len -= 1;
	}
}
