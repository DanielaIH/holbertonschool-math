#include "holberton.h"
/**
 * display_complex_number - Display a complex number
 * @c: struct complex
 * Return: Nothing
 */

void display_complex_number(complex c)
{
if (c.im == -1)
        printf("%d - i\n", c.re);
else if (c.im < 0)
	printf("%d - %di\n", c.re, -c.im);
if (c.im == 0)
	printf("%d\n", c.re);
if (c.im == 1)
	printf("%d + i\n", c.re);
else if (c.im > 0)
	printf("%d + %di\n", c.re, c.im);
}
