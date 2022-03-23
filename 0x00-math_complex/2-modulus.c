#include "holberton.h"
/**
 * modulus - returns modulus of a given complex number
 * @c: struct complex
 * Return: modulus of a complex number
 */

double modulus(complex c)
{
	return (sqrt((pow(c.re, 2) + pow(c.im, 2))));
}

