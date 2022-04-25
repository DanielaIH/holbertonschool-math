#include "rectangle.h"

/**
 * rectangle_method - calculates an integral with Rectangle method.
 * @a: limit a
 * @b: limit b
 * @steps: amount of rectangles
 */

double rectangle_method(double a, double b, int steps)
{
    double x = a, sum = 0.0, dx = (b - a) / steps;
    int i;

    for(i = 0; i < steps; i++)
    {
        sum += dx * (1 / (1 + x * x));
        x += dx;
    }
    return(sum);
}
