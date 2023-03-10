// Quick sort in C

#include <stdio.h>

void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int array[], int low, int high)
{

  int pivot = array[high];

  int i = (low - 1);

  for (int j = low; j < high; j++)
  {
    if (array[j] <= pivot)
    {

      i++;

      swap(&array[i], &array[j]);
    }
  }

  swap(&array[i + 1], &array[high]);

  return (i + 1);
}

void quickSort(int array[], int low, int high)
{
  if (low < high)
  {
    int pi = partition(array, low, high);

    quickSort(array, low, pi - 1);

    quickSort(array, pi + 1, high);
  }
}

void display(int array[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    printf("%d\t ", array[i]);
  }
}

int main()
{
  int data[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3};

  int n = sizeof(data) / sizeof(data[0]);

  quickSort(data, 0, n - 1);

  display(data, n);
}