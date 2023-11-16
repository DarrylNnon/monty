#include "monty.h"
/**
 * monty_Pint - display value first element.
 * @head: param stack head
 * @counter: param - line pos.
 * Authors: Darryl & Isaac
*/
void monty_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
