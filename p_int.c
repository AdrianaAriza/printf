#include "holberton.h"
/**
 * p_int - Print int
 * @arguments: list of arguments passed to printf
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: print int
 * Return: 0
 */
int p_int(va_list arguments, char *buffer, int i_b)
{
	return (print_number(va_arg(arguments, int), buffer, i_b));
}
