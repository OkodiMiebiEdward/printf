#include "main.h"

/**
 * str_to_temp - Adds each character in string 'str' to 'index'
 *in array 'temp'
 * @temp: An array
 * @index: index in array 'temp'
 * @str: A string
 */

void str_to_temp(char temp[], int *index, char *str)
{
	if (str == NULL)
		str = "(null)";
	if (index != NULL)
	{
		while (*str)
		{
			char_to_temp(temp, index, *str);
			str++;
		}
	}
}
