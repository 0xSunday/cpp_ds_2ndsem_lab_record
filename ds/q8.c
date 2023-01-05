// To implement circular linked list and perform different operation such as node insert
// and delete.

#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node *next;
} *head = NULL;

void insert(int pos, int value)
{
  struct Node *t, *p;
  if (pos == 0)
  {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = value;
    if (head == 0)
    {
      head = t;
      t->next = head;
    }
    else
    {

      t->next = head;
      for (int i = 0; i < value - 1; i++)
      {
        p = p->next;
      }
      p->next = t;
    }
  }
  else
  {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = value;
    p = head;
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
  p = head;
  q = NULL;
  if (pos == 1)
  {
    while (p != head)
    {
      p = p->next;
    }
    x = head->data;
    if (head == p)
    {
      free(head);
      head = NULL;
    }
    else
    {
      p->next = head->next;
      free(head);
      head = p->next;
    }

    head = head->next;
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

void display()
{
  struct Node *p;
  p = head;

  do
  {
    printf("%d \t", p->data);
    p = p->next;
  } while (p != head);
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

  printf(" \n the deleted value is %d \n", delete (5));
  display();

  return 0;
}