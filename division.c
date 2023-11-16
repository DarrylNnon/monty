#include "monty.h"
/**
 * monty_div - func divides the first two elements.
 * @head: pointer to thw head of the stack
 * @counter: line position
 * authors: Darryl && Isaac
*/
void monty_div(stack_t **head, unsigned int counter)
{
	stack_t *current;
	int length;
	int result;

	current = *head;
	for (length = 0; current != NULL; length++)
		current = current->next;
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current = *head;
	if (current->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	result = current->next->n / current->n;
	current->next->n = result;
	*head = current->next;
	free(current);
}
