#include "holberton.h"
/**
 * p_binary - Print string
 * @arguments: input string
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: print number
 * Return: 0
 */
int p_binary(va_list arguments, char *buffer, int i_b)
{
	int i, j = 0;
	char *ptr;

	i = va_arg(arguments, int);
	ptr = print_binary(i);

	for (; ptr[j]; j++, i_b++)
		buffer[i_b] = ptr[j];
	return (i_b);
}
