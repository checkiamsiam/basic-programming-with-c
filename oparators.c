#include <stdio.h>

void main()
{
  int a = 10;
  int b = 10;
  int c = a + b;
  // arithmetic operators
  printf("Value of c is %d\n", c);
  printf("Value of c is %d\n", a - b);
  printf("Value of c is %d\n", a * b);
  printf("Value of c is %d\n", a / b);
  printf("Value of c is %d\n", a % b);
  printf("Value of c is %d\n", a++);
  printf("Value of c is %d\n", a--);
  printf("Value of c is %d\n", ++a);
  printf("Value of c is %d\n", --a);
  printf("Value of c is %d\n", a += b);
  printf("Value of c is %d\n", a -= b);
  printf("Value of c is %d\n", a *= b);

  // conditional operators
  printf("Value of c is %d\n", a == b);
  printf("Value of c is %d\n", a != b);
  printf("Value of c is %d\n", a > b);
  printf("Value of c is %d\n", a < b);
  printf("Value of c is %d\n", a >= b);
  printf("Value of c is %d\n", a <= b); 
  printf("Value of c is %d\n", a && b); // logical AND 
  printf("Value of c is %d\n", a || b);   // logical OR
  printf("Value of c is %d\n", !a); // logical NOT
  printf("Value of c is %d\n", ~a); // bitwise NOT
  printf("Value of c is %d\n", a & b); // bitwise AND
  printf("Value of c is %d\n", a | b); // bitwise OR
  printf("Value of c is %d\n", a ^ b); // bitwise XOR
  printf("Value of c is %d\n", a << b); // bitwise left shift
  printf("Value of c is %d\n", a >> b); // bitwise right shift
}