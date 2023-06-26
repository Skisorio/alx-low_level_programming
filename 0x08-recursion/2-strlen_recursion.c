#include "main.h"
/**
 *_strlen_recursion - Returns the length of a string.
 *@s: The string to be measured.
 *
 * Return: The length of a string.
 */
int_stren_recursion(char *s)
{
	intlongit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursions(s + 1);
	}

	return (longit);
}


