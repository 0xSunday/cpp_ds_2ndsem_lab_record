// To search an element and print the total time of occurrence in the array.

#include <stdio.h>

struct Array
{
  int A[10];

  int size;
  int length;
};
int search_element(struct Array arr, int val)
{
  int i, count = 0;
  for (i = 0; i < arr.length; i++)

    if (arr.A[i] == val)
    {
      count++;
    }

  printf("total occurrence of %d is %d ", val, count);
}
int main()
{
  struct Array arr = {{1, 2, 3, 4, 5,5,6,6}, 10,8 };
  search_element(arr, 6);

  return 0;
}