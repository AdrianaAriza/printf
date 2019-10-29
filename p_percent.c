#include "holberton.h"
/**
 * percent - Print %
 * @arguments: list of arguments passed to printf
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: print %
 * Return: 0
 */
int percent(va_list arguments, char *buffer, int i_b)
{
	(void) arguments;
	buffer[i_b] = '%';
	return (++i_b);
}
