#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: int variable to save digit
 *
 * Return: 1 (digit)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
