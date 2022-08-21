#include "monty.h"
/**
 * _pchar - prints the char at the top of the stack, followed by a new line
 * @head_ref: pointer to first elem of stack.
 * @line_number: line number.
 */
void _pchar(stack_t **head_ref, unsigned int line_number)
{
	if ((*head_ref)->n)
	{
		if ((*head_ref)->n < 0 || (*head_ref)->n > 127)
		{
			fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
			exit(EXIT_FAILURE);
		}
		else
			printf("%c\n", (*head_ref)->n);
	}
	else
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}
