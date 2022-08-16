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
	(void)line_number;

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
	while (aux->next)
		aux = aux->next;
	aux->next = new_elem;
	new_elem->prev = aux;
}
/**
 * _pall
 * @head_ref:
 * @line_number:
 */

void _pall(stack_t **head_ref, unsigned int line_number)
{
	stack_t *aux = NULL;
	(void)line_number;

	aux = *head_ref;
	while (aux)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
}
/**
 * _pint - prints value at top of stack.
 * @head_ref: pointer to a pointer to a stack.
 * @line_number: number of line.
 */

void _pint(stack_t **head_ref, unsigned int line_number)
{
	stack_t *aux = NULL;
	(void)line_number;

	aux = *head_ref;
	while (aux->next)
		aux = aux->next;
	printf("%d\n", aux->n);
}
