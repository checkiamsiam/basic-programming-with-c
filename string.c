#include <stdio.h>
#include <string.h>

// string
void main()
{
  char name[5] = {'J', 'o', 'h', 'n', '\0'};
  char nameTwo[] = "John"; // simpler way to define string with dynamic size allocation
  printf("Name is %s\n", name);

  // take input from user
  char nameThree[20];
  printf("Enter your name: ");
  scanf("%s", nameThree);
  printf("Name is %s\n", nameThree);

  // take input with spaces
  char nameFour[20];
  printf("Enter your name: ");
  gets(nameFour);
  // fgets(nameFour, 20, stdin); // alternative to gets , it takes 3 arguments, 1st is the string, 2nd is the size of the string, 3rd is the input source (stdin) also it takes the newline character as input (Enter key)
  printf("Name is %s\n", nameFour);


  // get length of string
  printf("Length of name is %ld\n", strlen(nameFour));

  
}