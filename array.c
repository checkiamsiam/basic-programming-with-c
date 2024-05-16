#include <stdio.h>

void main()
{
  int size = 5;
  int array[size]; // declaring an array of size 5

  for (int i = 0; i < size; i++)
  {
    array[i] = i * 10; // initializing array elements to 0
  }

  // accessing array elements
  for (int i = 0; i < size; i++)
  {
    printf("Value of arr[%d] is %d\n", i, array[i]);
  }

  // new array with one extra index
  int arrayForInsertion[size + 1];
  for (int i = 0; i < size; i++)
  {
    arrayForInsertion[i] = array[i];
  }

  // inserting element
  int element = 100;
  int position = 2;
  for (int i = size + 1; i >= position; i--)
  {
    arrayForInsertion[i] = arrayForInsertion[i - 1];
  }
  arrayForInsertion[position] = element;

  for (int i = 0; i < size + 1; i++)
  {
    printf("Value of arrayForInsertion[%d] is %d\n", i, arrayForInsertion[i]);
  }

  // deleting element
  int positionToDelete = 2;
  for (int i = positionToDelete; i < size; i++)
  {
    arrayForInsertion[i] = arrayForInsertion[i + 1];
  }

  for (int i = 0; i < size; i++)
  {
    printf("Value of arrayForInsertion[%d] is %d\n", i, arrayForInsertion[i]);
  }

  // concatenating two arrays
  int array1[5] = {1, 2, 3, 4, 5};
  int array2[2] = {6, 7};
  int array3[7];
  for (int i = 0; i < 5; i++)
  {
    array3[i] = array1[i];
  }
  for (int i = 0; i < 2; i++)
  {
    array3[i + 5] = array2[i];
  }
  for (int i = 0; i < 7; i++)
  {
    printf("Value of array3[%d] is %d\n", i, array3[i]);
  }
}