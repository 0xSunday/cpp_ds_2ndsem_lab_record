// To insert and delete elements from appropriate position in an array.
#include <stdio.h>

struct Array
{
  int A[10];

  int size;
  int length;
};

int insert(struct Array *arr, int num, int index)
{

  for (int i = arr->length; i < index; i++)
  {
    arr->A[i] = arr->A[i - 1];
  }
  arr->A[index] = num;
  arr->length++;

  return 0;
}
int delete(struct Array *arr, int index)
{
  for (int i = index; i < arr->length; i++)
  {
    arr->A[i] = arr->A[i + 1];
  }
  arr->length--;
}
void display(struct Array arr)
{
  for (int i = 0; i < arr.length; i++)
  {
    printf("%d \n", arr.A[i]);
  }
}

int main()
{
  struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};
  insert(&arr, 12, 3);
  delete(&arr,  0);
  display(arr);

  return 0;
}