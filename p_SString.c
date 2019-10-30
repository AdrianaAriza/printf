#include "holberton.h"
/**
 * p_Sstring - Print string
 * @arguments: input string
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: print number
 * Return: 0
 */
int p_Sstring(va_list arguments, char *buffer, int i_b)
{
	int i = 0;
	char *ptr = va_arg(arguments, char *);

	if (!ptr)
		ptr = NULL;
	for (; ptr[i]; i++)
	{
		if (ptr[i] >= 32 && ptr[i] < 127)
			buffer[i_b] = ptr[i], i_b++;
		else
		{
			i_b = Hexa(ptr[i], buffer, i_b);
		}
	}
	return (i_b);
}
