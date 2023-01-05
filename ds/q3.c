// To delete all occurrence of an element in an array.

#include <stdio.h>
struct Array
{
  int A[10];

  int size;
  int length;
};

int remove_element(struct Array *arr, int val)
{
  int i;

  for (i = 0; i < arr->length; i++)

    if (arr->A[i] != val)
      printf("%d \t", arr->A[i]);
}

int main()
{
  struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};
  remove_element(&arr, 1);
}