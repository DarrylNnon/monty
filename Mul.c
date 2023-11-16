#include "monty.h"
/**
 * montyMul - func gets product of the top two elements.
 * @head: param - stack head
 * @counter: param - line position
 * Author: Darryl && Isaac
*/
void monty_multiply(stack_t **head, unsigned int counter)
{
	int lenght;
	int result;
	stack_t *current;

	current = *head;
	for (lenght = 0; current != NULL; lenght++)
		current = current->next;
	if (lenght < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current = *head;
	result = current->next->n * current->n;
	current->next->n = result;
	*head = current->next;
	free(current);
}
