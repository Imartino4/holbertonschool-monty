#include "monty.h"

/**
 * free_stack - frees a stack
 * @head: pointer to the first element of the stack
 * Return: void
 */
void free_stack(stack_t *head)
{
	stack_t *aux = head;

	if (head)
	{
		while (aux->next)
		{
			head = aux->next;
			free(aux);
			aux = head;
		}
		free(aux);
	}
}
/**
 *
 */
void justInCase(stack_t **head)
{
	stack_t *aux = (*head);

	while ((*head) != NULL)
	{
		aux = (*head);
		(*head) = (*head)->next;
		free(aux);
	}
}
