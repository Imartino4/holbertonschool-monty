#include "monty.h"

void _pall(stack_t **head_ref, unsigned int line_number)
{
	stack_t *aux = *head_ref;

	while (aux)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
}
