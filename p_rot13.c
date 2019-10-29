#include "holberton.h"
/**
 * p_rot13 - Print rot 13
 * @arguments: list of arguments passed to printf
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: print rot13
 * Return: 0
 */

int p_rot13(va_list arguments, char *buffer, int i_b)
{
	int i = 0, j;
	char *p = va_arg(arguments, char *);
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (!p)
	{
		p = "(null)";
		for (i = 0; p[i]; i++, i_b++)
			buffer[i_b] = p[i];
		return (i_b);
	}
	i = 0;
	while (p[i])
	{
		j = 0;
		while (alpha[j])
		{
			if (p[i] == alpha[j])
			{
				buffer[i_b] = rot13[j];
				i_b++;
				break;
			}
			j++;
		}
		i++;
	}
	return (i_b);
}
