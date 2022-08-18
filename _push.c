#include "monty.h"

void _push(stack_t **head_ref, unsigned int line_number)
{
	stack_t *new_elem = NULL;
	int data_int = 0, aux = 0;
	char *data_string = NULL;

	new_elem = malloc(sizeof(stack_t));
	if (new_elem == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	data_string = strtok(NULL, " \n");
	/*printf("data_string:%s\n", data_string);*/
	aux = check_digit(data_string);
	/*printf("%d%ld\n", aux, strlen(data_string));*/
	if (aux == -1)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (data_string == NULL)
	{
		fprintf(stderr, "Error: \n");
		exit(EXIT_FAILURE);
	}
	/*printf("data:%s\n", data_string);*/
	data_int = atoi(data_string);
	new_elem->n = data_int;
	new_elem->prev = NULL;
	new_elem->next = NULL;

	if ((*head_ref) != NULL)
	{
		new_elem->next = (*head_ref);
		(*head_ref)->prev = new_elem;
	}	
	*head_ref = new_elem;
}
