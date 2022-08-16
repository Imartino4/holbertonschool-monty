#include "monty.h"

/**
 * main - Interpreter for onty ByteCodes files
 * @argc: quantity of arguments
 * @argv: array of arguments
 */

int main(int argc, char **argv)
{

	FILE *monty_file;
	char buffer[1024];
	unsigned int count_line = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}


	monty_file = fopen(argv[1], "r");

	while (fgets(buffer, 1024, monty_file))
	{
		printf("%s \n", buffer);
		count_line++;
		choose_function(buffer, count_line);
	}
	//strtok(buffer, " ");
	
	/* push     2 */
	
	/* push primer strtok */

	/* 2 segundo strtok en funcion push */


	return (0);
}

void choose_function(char *buffer, int line_number)
{
	char *argument = NULL;
	int i = 0;
	char *data;
	instruction_t monty_functions[] = {
		{"push", _push}, {"pall", _pall}, {"pint", _pint},
		{"pop", _pop}, {"swap", _swap}, {"add", _add},
		{"nop", _nop}, {NULL, NULL}
	};

	argument = strtok(buffer, " \n");

	while (monty_functions[i].opcode)
	{
		if (strcmp(argument, monty_functions[i].opcode) == 0)
			monty_functions[i].f(asdasdasdsad, line_number);
			break;
		i++;
	}
}
