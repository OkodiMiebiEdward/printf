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


/**
  * non_printable_strings_to_temp - Adds a string, including
  *non-printable characters (npc) to array 'temp'
  * @temp: An array
  * @index: Index in temp
  * @str: A string
  */

void non_printable_strings_to_temp(char temp[], int *index, char *str)
{
	int i = 1, x = 0, npc;
	char *hexa_chars = "ABCDEF", hex_dec[] = "00";

	if (index != NULL)
	{
		while (*str)
		{
			if (*str < 32 || *str >= 127)
			{
				npc = *str;
				char_to_temp(temp, index, '\\');
				char_to_temp(temp, index, 'x');

				while (npc > 0 && i >= 0)
				{
					x = npc % 16;
					if (x < 10)
					{
						hex_dec[i] = x;
						i--;
					}
					else
					{
						x = x - 10;
						hex_dec[i] = hexa_chars[x];
						i--;
					}
					npc = npc / 16;
				}
				str_to_temp(temp, index, hex_dec);
			}
			else
			{
				char_to_temp(temp, index, *str);
			}
			str++;
		}
	}
}
