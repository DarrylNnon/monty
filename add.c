#include "monty.h"
/**
 * monty_add - add  the first two elements of stack.
 * @head: pointer to the head of the stack
 * @counter: line counter
*/
void monty_add(stack_t **head, unsigned int counter)
{
	int length;
	stack_t *current_node;
	int result;
	current_node = *head;

	for (stack_length = 0; current_node != NULL; stack_length++)
		current_node = current_node->next;
	/* check if the stack has at least two elements*/

	if (stack_length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current_node= *head;
	result = current_node->n + current_node->next->n;
	current_node->next->n = result;
	*head = current_node->next;
	free(current_node);
}
