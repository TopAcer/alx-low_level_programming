#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s: string
 * return: int
 */
int _strlen_recurs1ion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
