// To implement double linked list and perform different operation such as node insert
// and delete

#include <stdio.h>
#include <stdlib.h>
struct Node
{
  struct Node *prev;
  int data;
  struct Node *next;

} *first = NULL;

void creat(int A[], int n)
{
  int i;
  struct Node *t, *last;
  first = (struct Node *)malloc(sizeof(struct Node));
  first->data = A[0];
  first->next = first->prev = NULL;
  last = first;

  for (int i = 1; i < n; i++)
  {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next = last->next;
    t->prev = last;
    last->next = t;
    last = t;
  }
}
void insert(int pos, int val)
{
  struct Node *p, *t;

  p = first;
  if (pos == 0)
  {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = val;
    t->prev = NULL;
    t->next = first;
    first->prev = t;
    first = t;
  }
  else
  {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = val;
    for (int i = 0; i < pos - 1; i++)
    {
      p = p->next;
    }

    t->next = p->next;

    t->prev = p;
    if (p->next)
    {
      t->next->prev = t;
    }

    p->next = t;
  }
}
int deleteDoubly(int pos)
{
  int val;
  struct Node *p = first;
  p = first;
  if (pos == 1)
  {
    first = first->next;
    val = p->data;
    if (first)
    {
      first->prev = NULL;
    }
    free(p);
  }
  else
  {
    for (int i = 0; i < pos - 1; i++)
    {
      p = p->next;
    }

    val = p->data;
    p->prev->next = p->next;
    if (p->next)
    {
      p->next->prev = p->prev;
    }
    free(p);
  }
  return val;
}

void display(struct Node *p)
{
  while (p != NULL)
  {
    printf("%d \t", p->data);
    p = p->next;
  }
}

int main()
{

  int A[] = {1, 2, 3, 4, 5};
  creat(A, 5);
  insert(0, 6);
  insert(1, 10);

  display(first);

  printf("\n deleted value is %d \n", deleteDoubly(4));
  display(first);
  return 0;
}