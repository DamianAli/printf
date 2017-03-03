#include "holberton.h"
#include <stdlib.h>

/**
 * conv - formats character based on directive specified.
 * @args: Pointer to list of variable length arguments.
 * @position: Character to read and format based on directives.
 * @dircnt: To track number of directives called.
 *
 * Return: byes printed to stdout.
 */
int conv(va_list args, char position, int dircnt)
{
	int ui, bytecnt;
	char *str;

	ui = 0;
	bytecnt = 0;
	switch (position)
	{
		case 'c':
			ui = va_arg(args, int);
			_putchar(ui);
			break;

		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
			{
				bytecnt = print_str("(null)") - 1;
			}
			else
			{
				bytecnt = print_str(str);
				if (dircnt)
				{
					bytecnt -= 1;
				}
			}
			break;

		case '%':
			_putchar('%');
			break;

		default:
			_putchar('%');
			bytecnt++;
			_putchar(position);
	}
	return (bytecnt);
}
