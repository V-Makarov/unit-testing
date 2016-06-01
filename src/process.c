#include <stdio.h>
#include <math.h>
#include <process.h>
#include <discriminant.h>

const double eps = 1e-10;
/*
ERROR = -1;
NO ROOTS = 0;
ONE ROOT = 1;
TWO ROOTS = 2;
*/

int equal(double a, double b, double eps) 
{
  return fabs(a - b) < eps;
}

int process(double a, double b, double c, double *x1, double *x2) 
{
  double d = discriminant(a, b, c);
  if (d < 0) //Если корней нет.
    {
      return 0;
    }
  
  if (equal(d, 0, eps)) //Если корень один.
    {
      *x1 = -b / (2 / a);
      return 1;
    }
  
  if (d > 0) //Если два корня.
    {
      *x1 = (-b - sqrt(d)) / (2 * a);
      *x2 = (-b + sqrt(d)) / (2 * a);
      return 2;
    }
  
  return -1;
}
