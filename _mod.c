#include "monty.h"
/**
 * _mod - computes the rest of the division of second top by the top element
 * @head_ref: pointer to first elem of stack.
 * @line_number: line number.
 */
void _mod(stack_t **head_ref, unsigned int line_number)
{
	stack_t *aux = *head_ref;
	int data_aux1 = 0, data_aux2 = 0;

	if (*head_ref == NULL || (*head_ref)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (aux->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	aux = aux->next;
	data_aux1 = (*head_ref)->n;
	data_aux2 = aux->n;
	data_aux2 = data_aux2 % data_aux1;
	_pop(head_ref, line_number);
	(*head_ref)->n = data_aux2;
}
