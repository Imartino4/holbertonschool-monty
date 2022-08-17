#include "monty.h"

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
