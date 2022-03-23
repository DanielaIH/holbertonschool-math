#include "holberton.h"
/**
 * conjugate - returns the conjugate of a given
 * complex number.
 * @c: c strcuture
 * Return: the conjugate of a given complex number
 */

complex conjugate(complex c)
{
	c.im = (-1) * c.im;
	return (c);
}
