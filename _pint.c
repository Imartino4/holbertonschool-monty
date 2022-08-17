#include "monty.h"

void _pint(stack_t **head_ref, unsigned int line_number)
{
	printf("%d\n", (*head_ref)->n);
}
