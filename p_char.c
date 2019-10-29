#include "holberton.h"
/**
 * p_char - Print characters
 * @arguments: list of arguments passed to printf
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: Print characters
 * Return: 0
 */
int p_char(va_list arguments, char *buffer, int i_b)
{
	buffer[i_b] = va_arg(arguments, int);
	return (++i_b);
}
