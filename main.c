#include "monty.h"
/**
 * main - Interpreter for onty ByteCodes files
 * @argc: quantity of arguments
 * @argv: array of arguments
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	FILE *monty_file;
	char buffer[1024];
	size_t len = 1024;
	unsigned int count_line = 0;
	stack_t *head;

	head = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	monty_file = fopen(argv[1], "r");
	if (monty_file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(buffer, len, monty_file))
	{
		count_line++;
		choose_function(buffer, count_line, &head);
	}
	fclose(monty_file);
	free_stack(head);
	return (0);
}
/**
 * choose_function - selects which functions to use.
 * @buffer: line of text.
 * @line_number: line number of text.
 * @head: pointer to a pointer to a string.
 */
void choose_function(char *buffer, int line_number, stack_t **head)
{
	char *argument = NULL;
	int i = 0;
	instruction_t monty_functions[] = {
		{"push", _push}, {"pall", _pall}, {"pint", _pint},
		{"pop", _pop}, {"swap", _swap}, {"add", _add},
		{"nop", _nop}, {"sub", _sub}, {NULL, NULL}
	};

	argument = strtok(buffer, " \n");
	if (!argument)
		return;
	while (monty_functions[i].opcode)
	{
		if (strcmp(argument, monty_functions[i].opcode) == 0)
		{
			monty_functions[i].f(head, line_number);
			break;
		}
		i++;
	}
	if (monty_functions[i].opcode == NULL)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, argument);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
}
