#include "main.h"

/**
 * number_to_temp - Recursively adds each number 'num' to
 *index in array 'temp', starting from the last digit
 * @temp: An array
 * @index: index in array 'temp'
 * @num: A Number
 */

void number_to_temp(char temp[], int *index, int num)
{
	if (index != NULL)
	{
		if (num < 0)
		{
			char_to_temp(temp, index, '-');
			num = -num;
		}
		if (num >= 10)
			number_to_temp(temp, index, num / 10);
		char_to_temp(temp, index, '0' + num % 10);
	}
}
