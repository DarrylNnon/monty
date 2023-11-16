#include "monty.h"
/**
  *monty_rotl- rotates the stack.
  *@head: stack head
  *@counter: line position
  *author: Darryl & Isaac
 */
void monty_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *curr;
	stack_t *result;

	curr = *head;
	if (*head == NULL || (*head)->next == NULL)
		return;
	result = (*head)->next;
	result->prev = NULL;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = *head;
	(*head)->next = NULL;
	(*head)->prev = curr;
	(*head) = result;
}
