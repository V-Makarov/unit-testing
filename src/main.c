#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <process.h>

int main()
{
  double a, b, c, x1, x2;
  short fl = 5;

  printf("Квадратное уравнение это уравнение вида ax^2 + bx + c = 0\n");
  printf("Введите a, b, c\n");
  printf("a = ");
  scanf("%lf", &a);
  printf("\nb = ");
  scanf("%lf", &b);
  printf("\nc = ");
  scanf("%lf", &c);
  printf("\n");
  
  if (a == 0)
    printf("Это не квадратное уравнение!\n");
  else
    fl = solve(a, b, c, &x1, &x2);
  
  if (fl == 0)
    printf("Нет действительных корней.\n");
  else if (fl == 1)
    printf("Только один корень: x = %4.2f\n", x1);
  else if (fl == 2)
    printf("Два корня: \n x1 = %4.2f\n x2 = %4.2f\n", x1, x2);
  return 0;
}
