#include "simpson.h"

/**
 * simpson - calculates an integral with Rectangle method.
 * @a: limit a
 * @b: limit b
 * @steps: amount of rectangles
 * Return: sum
 */

double simpson(double a, double b, int steps)
{

	double x = a, sum = 0.0, dx = (b - a) / steps;
	int i;

	sum += 1 / (1 + (x * x));

	for (i = 1; i <= (steps - 1); i++)
	{
		x = a + i * dx;
		if (i % 2 == 0)
			sum += 2 * (1 / (1 + (x * x)));
		else
			sum += 4 * (1 / (1 + (x * x)));
	}
	x = b;
	sum += 1 / (1 + (x * x));
	sum *= (dx / 3);

	return (sum);
}

/**
 * main - Con este algoritmo me dio exacto el resultado
 *
 * sum += 1 / (1 + (x * x));
 * x += dx;
 * for(i = 1; i <= steps; i++)
 * {
 *       if (i <= (steps - 1))
 *           sum += 2 * (1 / (1 + (x * x)));
 *       sum += 4 * (1 / (1 + pow((((2 * x) - dx) / 2), 2)));
 *       x += dx;
 * }
 * x-= dx;
 * sum += 1 / (1 + (x * x));
 * sum *= (dx / 6);
 */
