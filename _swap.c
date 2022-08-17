#include "monty.h"

/**
 * _swap - 
 * @head_ref:
 * @line_number:
 */

void _swap(stack_t **head_ref, unsigned int line_number)
{
	stack_t *aux = *head_ref;
	int data_aux = 0;

	if (*head_ref == NULL || (*head_ref)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	
	aux = aux->next;
	/*
	data_aux = aux->n;
	aux->n = (*head_ref)->n;
	(*head_ref)->n = data_aux;
	*/
	(*head_ref)->next = aux->next;
	(*head_ref)->prev = aux;
	aux->prev = *head_ref;
	(*head_ref)->next->prev = *head_ref;

}
