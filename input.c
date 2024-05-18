#include <stdio.h>

void main()
{
  float a;
  printf("Enter a number: ");
  scanf("%f", &a); // %d is format specifier for integer &variable_name is address of the variable
  printf("Value of a is %0.2f\n", a);
}