#include "holberton.h"
/**
 * p_string - Print string
 * @arguments: input string
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: print number
 * Return: 0
 */
int p_string(va_list arguments, char *buffer, int i_b)
{
	int i = 0;
	char *ptr = va_arg(arguments, char *);

	if (!ptr)
		ptr = "(null)";
	for (; ptr[i]; i++, i_b++)
		buffer[i_b] = ptr[i];
	return (i_b);
}
