#include "main.h"
/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi -1;
	for (o = 0; i <= t ; o++)
	{
		if (o % 2 == 0)
		_putchar(str[o]);
	}
}
	_putchar('\n');
}
