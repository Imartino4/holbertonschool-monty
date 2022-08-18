#include "monty.h"
/**
 * check_digit - check if a string is a valid number
 * @string: string to be checked
 * Return: 0 if the string is a number or NULL and -1 otherwise.
 */
int check_digit(char *string)
{
	int i = 0, counter = 0;

	if (string == NULL)
		return (0);
	while (string[i])
	{
		if (string[i] == '-')
		{
			i++;
			continue;
		}
		/*if (string[i] == ' ')
			counter++;*/
		if ((string[i] > 57 || string[i] < 48)/* && counter > 2*/)
			return (-1);
		i++;
	}
	return (0);
}
