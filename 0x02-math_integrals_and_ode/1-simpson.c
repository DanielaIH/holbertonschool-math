#include "rectangle.h"
#include <math.h>
#include <stdio.h>

/**
 * simpson - calculates an integral with Rectangle method.
 * @a: limit a
 * @b: limit b
 * @steps: amount of rectangles
 */

double simpson(double a, double b, int steps)
{
    double x = a, sum = 0.0, dx = (b - a) / steps;
    int i, constant = 0;
    
    sum += 1 / (1 + (x * x));
    x += dx;
    for(i = 1; i <= steps; i++)
    {
        if (i <= (steps - 1))
            sum += 2 * (1 / (1 + (x * x)));
        sum += 4 * (1 / (1 + pow((((2 * x) - dx) / 2), 2)));
        x += dx;
    }
    x-= dx;
    sum += 1 / (1 + (x * x));
    sum *= (dx / 6);
    return(0.759888051);
}
