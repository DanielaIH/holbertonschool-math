#include "holberton.h"
#include <math.h>
/**
 * argument - returns the argument of a given complex number
 * @c: complex struct complex
 * Return: argument of a given complex number
 */
double argument(complex c)
{
	return (atan(c.im / c.re));
}
