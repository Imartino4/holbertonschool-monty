#include "monty.h"

/**
 * _push - insert an element at the top of the stack
 * @head_ref: pointer to head of first element of the stack
 * @line_number: 
 */

void _push(stack_t **head_ref, unsigned int line_number)
{
	stack_t *new_elem = malloc(sizeof(stack_t)); /*HACER FREE*/
	stack_t *aux = *head_ref;
	int data;

	data = atoi(strtok(NULL, " \n"));
	if (new_elem == NULL)
		return;
	new_elem->next = NULL;
	new_elem->n = data;

	if (*head_ref == NULL)
	{
		new_elem->prev = NULL;
		*head_ref = new_elem;
		return;
	}
	while (aux)
		aux = aux->next;
	aux->next = new_elem;
	new_elem->prev = aux;
}

