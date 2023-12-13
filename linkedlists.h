#ifndef LINKEDLISTS_H
#define LINKEDLISTS_H
#include "monty.h"

/* linkedlist_funcs1.c */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/* linkedlist_funcs2.c */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
void free_dlistint(dlistint_t *head);

#endif /* Prepared by Happy F. Chukwuma */
