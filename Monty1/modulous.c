#include "monty.h"
/**
 * montyMod - computes mod of first two members
 * @head: stack head
 * @counter: line position
 * Authors: Darryl & Isaac
*/
void monty_mod(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int lenght;
	int result;

	hd = *head;
	for (lenght = 0; hd != NULL; lenght++)
		hd = hd->next;
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	if (hd->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	result = hd->next->n % hd->n;
	hd->next->n = result;
	*head = hd->next;
	free(hd);
}
