#include "holberton.h"
/**
 * p_percent - Print %
 * @arguments: list of arguments passed to printf
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: print %
 * Return: 0
 */
int p_percent(va_list arguments, char *buffer, int i_b)
{
	(void) arguments;
	buffer[i_b] = '%';
	return (++i_b);
}
