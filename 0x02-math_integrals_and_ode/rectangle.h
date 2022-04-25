#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include <math.h>
#include <stdio.h>

double rectangle_method(double a, double b, int steps);
double simpson(double a, double b, int steps);
void Euler(FILE *euler, char *name,double x0, double y0, double T, int n);

#endif
