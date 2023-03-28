#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */

void more_numbers(void)
{
  int m, n, i, j;
  m = 14;
  n = 10;
  
  for (i = 0; i <= m; i++)
  {
    for (j = 0; j <= n; j++)
    {
      _putchar("%d", i);
    }
    _putchar("%d", j);
  }
  return (0);
}
