#include "monty.h"
/**
 * monty_pchar - displays the char rep of top element.
 * @head: param - stack head
 * @counter: param - line position
 * Author: Darryl && Isaac
*/
void monty_pchar(stack_t **head, unsigned int counter)
{
	stack_t *current_node;

	current_node = *head;
	if (current_node == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (current_node->n > 127 || current_node->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", current_node->n);
}
