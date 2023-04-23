#include "main.h"
#include <stdint.h>

/**
 * print_number - prints out a number
 * @n: A number
 * @len: Current length of the string.
 */

int print_number(signed long n, int len)
{
	int value[20];
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		len += 1;
	}
	if (n == 0)
	{
		_putchar('0');
		len += 1;
		return (len);
	}

	while (n > 0)
	{
		value[i] = n % 10;
		n /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(value[i] + '0');
		len += 1;
	}
	return (len);
}
