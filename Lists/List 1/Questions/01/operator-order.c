#include <stdio.h>

int main() 
{
  float x1 = 7 + 3 * 6 / 2 -1;
  float x2 = 2 % 2 + 2 * 2 - 2 / 2;
  float x3 = (3 * 9 * (3 + (9 * 3 / (3))));

  printf("%f %f %f\n", x1, x2, x3);

  return 0;
}