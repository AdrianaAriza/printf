#include "holberton.h"
/**
 * get_type - Get type print function
 * @s: Parameter input
 *
 * Description: Get type print function
 * Return: Nothing
 */
int (*get_type(char *s))(va_list arguments, char *buffer, int i_b)
{
	t_i types[] = {
		{"c", p_char},
		{"s", p_string},
		{"i", p_int},
		{"d", p_int},
		{"%", percent},
		{"b", p_binary},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (types[i].letter)
	{
		if (types[i].letter[0] == s[0] && s[0] != '\0')
			return (types[i].f);
		i++;
	}
	return (NULL);
}
