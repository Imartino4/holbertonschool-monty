#include "monty.h"

/**
 * _pall
 * @head_ref:
 * @line_number:
 */

void _pall(stack_t **head_ref, unsigned int line_number)
{
	stack_t *aux = NULL;

	aux = *head_ref;
	while (aux)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
}
