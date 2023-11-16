#include "monty.h"
/**
 * monty_pop - func removes the first element
 * @head: param - stack head
 * @counter: param  - line position
 * Authors: Darryl && Isaac
*/
void monty_pop(stack_t **head, unsigned int counter)
{
	stack_t *my_hd;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	my_hd = *head;
	*head = my_hd->next;
	free(my_hd);
}
