#include <stdio.h>

void main()
{
  float a;
  printf("Enter a number: ");
  scanf("%f", &a); // %d is format specifier for integer
  printf("Value of a is %0.2f\n", a);
}