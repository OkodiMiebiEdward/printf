#include "main.h"

/**
 * check_specifier - Checks for valid specifiers
 * @c: format flag
 *
 * Return:
 * - 0 (invalid specifier)
 * - 1 (valid specifier)
 */

int check_specifier(char c)
{
	int i = 0;
	char *specifiers = "s,c,d,i,%,x,u,o,X,b,S,p";

	while (specifiers[i] != '\0')
	{
		if (c == specifiers[i])
			return (1);

		i++;
	}
	return (0);
}
