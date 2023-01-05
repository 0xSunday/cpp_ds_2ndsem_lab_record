// Polynomial representation using linked list.

#include <stdio.h>
#include <stdlib.h>

struct term
{
  int coefficient;
  int exponent;
  struct term *next;
};

struct polynomial
{
  struct term *head;
};

struct term *create_term(int coefficient, int exponent)
{
  struct term *new_term = malloc(sizeof(struct term));
  new_term->coefficient = coefficient;
  new_term->exponent = exponent;
  new_term->next = NULL;
  return new_term;
}

struct polynomial *create_polynomial()
{
  struct polynomial *new_poly = malloc(sizeof(struct polynomial));
  new_poly->head = NULL;
  return new_poly;
}

void insert_term(struct polynomial *poly, int coefficient, int exponent)
{
  struct term *new_term = create_term(coefficient, exponent);

  if (poly->head == NULL)
  {
    poly->head = new_term;
    return;
  }

  struct term *cur = poly->head;
  struct term *prev = NULL;
  while (cur != NULL && exponent < cur->exponent)
  {
    prev = cur;
    cur = cur->next;
  }

  if (prev == NULL)
  {
    new_term->next = poly->head;
    poly->head = new_term;
  }
  else
  {
    new_term->next = cur;
    prev->next = new_term;
  }
}

void print_polynomial(struct polynomial *poly)
{
  struct term *cur = poly->head;
  while (cur != NULL)
  {
    printf("%dx^%d", cur->coefficient, cur->exponent);
    cur = cur->next;
    if (cur != NULL)
    {
      printf(" + ");
    }
  }
}

int main()
{
  struct polynomial *poly = create_polynomial();

  insert_term(poly, 3, 2);
  insert_term(poly, 2, 1);
  insert_term(poly, 1, 0);

  print_polynomial(poly);
}
