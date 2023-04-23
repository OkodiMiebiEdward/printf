#include "main.h"

/**
 * check_flag - checks the right flag for the expected output
 * @f: the character to be checked
 * @len: pointer to an int
 * @ap: va list
 * @string: format string
 *
 * Return: len
 */

int check_flag(char f, va_list ap, int len, const char *string)
{
	char *s = "";

	switch (f)
	{
		case 's':
			{
				s = va_arg(ap, char *);
				if (s == NULL && (string[0] == '%' && string[1] == 's'))
					s = "(null)";
				len += print_string(s, len);
				break;
			}
		case 'c':
			len += print_character(va_arg(ap, int), len);
			break;
		case 'd':
		case 'i':
			{
				len += print_number(va_arg(ap, signed long int), len);
				len -= 1;
				break;
			}
		default:
			break;
	}
	return (len);
}
