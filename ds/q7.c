// To implement linear linked list and perform different operation such as node insert and
// delete, temp of an item, reverse the list.

#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node *next;
} *first = NULL;

void insert(int pos, int value)
{
  struct Node *t, *p;
  if (pos == 0)
  {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = value;
    t->next = first;
    first = t;
  }
  else
  {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = value;
    p = first;
    for (int i = 0; i < pos - 1; i++)
    {
      p = p->next;
    }
    t->next = p->next;
    p->next = t;
  }
}

int delete(int pos)
{
  struct Node *p, *q;
  int x = -1;
  p = first;
  q = NULL;
  if (pos == 1)
  {
    x = q->data;
    first = first->next;
    free(p);
  }
  else
  {
    for (int i = 0; i < pos - 1; i++)
    {
      q = p;
      p = p->next;
    }
    if (pos != 0)
    {
      q->next = p->next;
      x = p->data;
      free(p);
    }
  }
  return x;
}

struct Node *Search(int key)
{
  struct Node *p = first;

  while (p != 0)
  {
    if (key == p->data)
    {
      return p;
    }
    p = p->next;
  }
  return NULL;
}

void Reverse()
{
  struct Node *p = first, *q = NULL, *r = NULL;

  while (p != 0)
  {
    r = q;
    q = p;
    p = p->next;
    q->next = r;
  }
  first = q;
}

void display()
{
  struct Node *p;
  p = first;
  while (p != 0)
  {
    printf("%d \t", p->data);
    p = p->next;
  }
}

int main()
{
  insert(0, 1);
  insert(1, 2);
  insert(2, 3);
  insert(3, 4);
  insert(4, 5);
  insert(5, 6);
  display();

  printf("\n the deleted value is %d \n", delete (2));
  display();

  struct Node *temp = Search(4);
  if (temp)
  {
    printf("\nthe value is %d \n", temp->data);
  }
  else
  {
    printf("\n value is not found \n");
  }

  Reverse();
  printf("after revering the linked list \n");
  display();
  return 0;
}