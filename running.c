#include "monty.h"
/**
* montyRun - runs opcode
* @stack: param head of linked list.
* @counter:line position.
* @file: param - ptr to opcode file.
* @content: param - line content.
* Return: returns 1.
* Authors: Darryl & Isaac
*/
int monty_run(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	char *operator;
	instruction_t tally[] = {
				{"push", monty_push}, {"pall", monty_pall}, {"pint", monty_pint},
				{"pop", monty_pop}, {"swap", monty_swap}, {"add", monty_add},
				{"nop", monty_nop}, {"sub", monty_sub}, {"div", monty_divide},
				{"mul", monty_mutiplyl}, {"mod", monty_mod}, {"pchar", monty_pchar},
				{"pstr", monty_pstr}, {"rotl", monty_rotl}, {"rotr", monty_rotr},
				{"queue", monty_queue}, {"stack", monty_stack}, {NULL, NULL}
				};
	unsigned int idx = 0;

	operator = strtok(content, " \n\t");
	if (operator && operator[0] == '#')
		return (0);
	stub.myarg = strtok(NULL, " \n\t");
	while (tally[idx].opcode && operator)
	{
		if (strcmp(operator, tally[idx].opcode) == 0)
		{	tally[idx].f(stack, counter);
			return (0);
		}
		idx++;
	}
	if (operator && tally[idx].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, operator);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
