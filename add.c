#include "monty.h"
/**
 * addmy_monty - display  the first two elements of stack.
 * @head: param head
 * @counter: line counter
 * Authors: Darryl && Isaac
*/
void addmy_monty(stack_t **head, unsigned int counter)
{
	int lenght;
	stack_t *h;
	int my_result;

	h = *head;
	for (length = 0; h != NULL; length++)
		h = h->next;
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		clear_me(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	my_result = h->n + h->next->n;
	h->next->n = my_result;
	*head = h->next;
	free(h);
}
