#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <process.h>

/*костыль на костыле*/
int main()
{
  double a, b, c, x1, x2;
  int result = -1337;
  //Ввод данных
  system("clear");
  printf("Квадратное уравнение это уравнение вида ax^2 + bx + c = 0\n");
  printf("Введите a, b, c\n");
  printf("a = ");
  scanf("%lf", &a);
  printf("\nb = ");
  scanf("%lf", &b);
  printf("\nc = ");
  scanf("%lf", &c);
  printf("\n");
  printf("%4.2fx^2 + %4.2fx + %4.2f = 0\n", a, b, c);
  //Проверка
  if (a == 0)
    {
      printf("Это не квадратное уравнение!\n");
      return 0;
    }  
  else //запуск 
    result = process(a, b, c, &x1, &x2);
  //Вывод рез-тов
  if (result == 0)
    printf("Нет действительных корней.\n");
  else if (result == 1)
    printf("Только один корень: x = %4.2f\n", x1);
  else if (result == 2)
    printf("Два корня: \n x1 = %4.2f\n x2 = %4.2f\n", x1, x2);
  return 0;
}
