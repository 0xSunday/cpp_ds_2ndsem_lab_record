//  Linked list implementation of Stack.

#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node *next;
} *top = NULL;
void push(int x)
{
  struct Node *t;
  t = (struct Node *)malloc(sizeof(struct Node));

  if (t == NULL)
    printf("stack is full\n");
  else
  {
    t->data = x;
    t->next = top;
    top = t;
  }
}
void Display()
{
  struct Node *p;
  p = top;
  while (p != NULL)
  {
    printf("%d \t ", p->data);
    p = p->next;
  }
  printf("\n");
}
int main()
{
  push(10);
  push(20);
  push(30);

  Display();

  return 0;
}