#include "monty.h"
/**
 * _pop - removes the top element of the stack
 * @head_ref: pointer to first element of a stack
 * @line_numbers: number of line
 */
void _pop(stack_t **head_ref, unsigned int line_numbers)
{
	stack_t *aux = (*head_ref);

	if (*head_ref)
		*head_ref = (*head_ref)->next; /*Move head to second element*/
	else
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_numbers);
		exit(EXIT_FAILURE);
	}
	/*if (*head_ref) if after moving still exist*/
		/*(*head_ref)->prev = NULL;*/
	free(aux); /* frees the space that was popped */
}
