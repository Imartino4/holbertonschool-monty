#include "monty.h"
/**
 * _add - adds
 * @head_ref: pointer to pointer to data.
 * @line_number: line number.
 */
void _add(stack_t **head_ref, unsigned int line_number)
{
	stack_t *aux = *head_ref;
	int data_aux1 = 0, data_aux2 = 0;

	if (*head_ref == NULL || (*head_ref)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	aux = aux->next;
	data_aux1 = (*head_ref)->n;
	data_aux2 = aux->n;
	data_aux2 = data_aux1 + data_aux2;
	_pop(head_ref, line_number);
	(*head_ref)->n = data_aux2;
}
