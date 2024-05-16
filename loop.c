#include <stdio.h>

void main()
{
  // for loop
  for (int i = 0; i < 10; i++)
  {
    printf("Value of i is %d\n", i);
  }

  // while loop
  int j = 0;
  while (j < 10)
  {
    printf("Value of j is %d\n", j);
    j++;
  }

  // do while loop
  int k = 0;
  do
  {
    printf("Value of k is %d\n", k);
    k++;
  } while (k < 10);

  // break and continue
  for (int i = 0; i < 10; i++)
  {
    if (i == 5)
    {
      continue;
    }
    if (i == 8)
    {
      break;
    }
    printf("Value of i is %d\n", i);
  }
}