#include "main.h"

/**
 * check_flag - checks the right flag for the expected output
 * @f: the character to be checked
 * @len: pointer to an int
 * @arg: pointer expected
 * Return: 0 on succes
 */

int check_flag(char f, void *arg, int *len)
{
	unsigned int i = 0;

	char fg[] = {'s', 'c'};

	if (f)
	{
		while (i < strlen(fg))
		{
			if (fg[i] == f)
			{
				switch (f)
				{
					case 's':
						print_string((char *)arg, len);
						break;
					case 'c':
						print_character(arg, len);
						break;
				}
			}
			i++;
		}
		return (1);
	}
	return (0);
}

