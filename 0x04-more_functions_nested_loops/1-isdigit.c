#include "main.h"

/**
 * _isdigit - check the code.
 *
 * @c :check input
 *
 * Return: 1 if c is uppercase and 0 otherwise
 *
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	return (0);

}
