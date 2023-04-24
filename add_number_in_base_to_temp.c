#include "main.h"

/**
 * hexadecimal_to_temp - Recursively changes a number in base 10 to base 16
 *and adds the number to array 'temp'
 * @temp: An array
 * @index: Index in temp
 * @num: A number in base 10
 */

void hexadecimal_to_temp(char temp[], int *index, unsigned int num)
{
	unsigned int x = 0;
	char *hexa_chars = "abcdef";

	if (index != NULL)
	{
		if (num >= 16)
		{
			hexadecimal_to_temp(temp, index, num / 16);
		}

		x = num % 16;
		if (x < 10)
			char_to_temp(temp, index, '0' + x % 10);
		else
		{
			x = x - 10;
			char_to_temp(temp, index, hexa_chars[x]);
		}
	}
}


/**
  * hexadecimal_to_temp_upper - Recursively changes a number in base 10
  *to base 16 and adds the number to array 'temp'
  * @temp: An array
  * @index: Index in temp
  * @num: A number in base 10
  */

void hexadecimal_to_temp_upper(char temp[], int *index, unsigned int num)
{
	unsigned int x = 0;
	char *hexa_chars = "ABCDEF";

	if (index != NULL)
	{
		if (num >= 16)
		{
			hexadecimal_to_temp_upper(temp, index, num / 16);
		}

		x = num % 16;
		if (x < 10)
			char_to_temp(temp, index, '0' + x % 10);
		else
		{
			x = x - 10;
			char_to_temp(temp, index, hexa_chars[x]);
		}
	}
}

/**
  * octal_to_temp - Recursively changes a number in base 10 to base 8
  *and adds the number to array 'temp'
  * @temp: An array
  * @index: Index in temp
  * @num: A number in base 10
  */

void octal_to_temp(char temp[], int *index, unsigned int num)
{
	if (index != NULL)
	{
		if (num >= 8)
			octal_to_temp(temp, index, num / 8);
		char_to_temp(temp, index, '0' + num % 8);
	}
}
