#include "monty.h"
/**
 * _pint - pint.
 * @head_ref: pointer to first in stack.
 * @line_number: line num.
 */
void _pint(stack_t **head_ref, unsigned int line_number)
{
	(void)line_number;
	printf("%d\n", (*head_ref)->n);
}
