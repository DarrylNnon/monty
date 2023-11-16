#include "monty.h"
/**
 * montyMul -  gets product of the top two elements.
 * @head: stack head
 * @counter:line position
 * Author: Darryl && Isaac
*/
void monty_muL(stack_t **head, unsigned int counter)
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
