#include "monty.h"

/**
 * is_integer - Checks if a string is an integer
 *
 * @str: String to check
 *
 * Return: 1 if the string is an integer, 0 otherwise
 */
int is_integer(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	if (str[0] == '-')
		i = 1;
	for (; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}
