#include "monty.h"

/**
 * isdig - checks if a string is a digit
 * @str: string to check
 */
int isdig(char *str)
{
	if (!str || *str == '\0')
		return (0);
	if (*str == '-')
		str++;
	while (*str)
	{
		if (isdigit(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}

/**
 * isnum - checks if a string is a number
 * @str: provided string
 */
int isnum(char *str)
{
	int c;

	if (!str)
		return (0);
	for (c = 0; str[c]; c++)
		if (c < '0' || c > '9')
			return (0);
	return (1);
}
