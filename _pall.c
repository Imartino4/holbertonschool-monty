#include "monty.h"
/**
 * _pall - prints all elems of a stack.
 * @head_ref: pointer to pointer to data.
 * @line_number: line number where found.
 */
void _pall(stack_t **head_ref, unsigned int line_number)
{
	stack_t *aux;
	(void)line_number;

	aux = *head_ref;
	while (aux)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
}
