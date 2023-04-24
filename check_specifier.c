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
	return (c == 's' || c == 'c' || c == 'd' || c == 'i' || c == '%' || c == 'b');
}
