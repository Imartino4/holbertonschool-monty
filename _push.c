#include "monty.h"

void _push(stack_t **head_ref, unsigned int line_number)
{
	stack_t *new_elem = NULL, *aux = NULL;
	int data;
	(void)line_number;

	new_elem = malloc(sizeof(stack_t));
	if (new_elem == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	data = atoi(strtok(NULL, " \n"));
	aux = *head_ref;
	new_elem->n = data;
	new_elem->prev = NULL;
	new_elem->next = NULL;

	if (*head_ref == NULL)
		*head_ref = new_elem;
	else
	{
		(*head_ref)->prev = new_elem;
		new_elem->next = *head_ref;
		*head_ref = new_elem;
	}
}
