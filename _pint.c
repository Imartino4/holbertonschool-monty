#include "monty.h"
/**
 * _pint - pint.
 * @head_ref: pointer to first in stack.
 * @line_number: line num.
 */
void _pint(stack_t **head_ref, unsigned int line_number)
{
	if (*head_ref == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head_ref)->n);
}
