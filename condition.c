#include <stdio.h>

void main()
{
  int a = 10;
  int b = 10;
  int c = a + b;
  if (c == 20)
  {
    printf("Value is 20");
  }
  else if (c < 10)
  {
    if (c < 5)
    {
      printf("Value is less than 5");
    }
    else
    {
      printf("Value is less than 10");
    }
  }
  else
  {
    printf("Value is unknown");
  }
}