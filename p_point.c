#include "holberton.h"
/**
 * p_point - Print hexadecimal
 * @arguments: list of arguments passed to printf
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: Print hexadecimal
 * Return: 0
 */

int p_point(va_list arguments, char *buffer, int i_b)
{
	buffer[i_b] = 48;
	i_b++;
	buffer[i_b] = 120;
	i_b++;
	i_b = p_hexa(arguments, buffer, i_b);
	return (i_b);
}
