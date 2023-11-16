#include "monty.h"
/**
 * monty_Pall - prints the element of the stack
 * @head: param - stack head
 * @counter: line position
 * Auhtor: Darryl && Isaac
*/
void monty_pall(stack_t **head, unsigned int counter)
{
	stack_t *current_node;
	(void)counter;

	current_node = *head;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
	}
}
