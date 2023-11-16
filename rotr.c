#include "monty.h"
/**
  *monty_rotr- rotates stack
  *@head:  stack head
  *@counter: line position
  * Authors: Darryl & Isaac
 */
void monty_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *curr;

	curr = *head;
	if (*head == NULL || (*head)->next == NULL)
		return;
	while (curr->next)
		curr = curr->next;
	curr->next = *head;
	curr->prev->next = NULL;
	curr->prev = NULL;
	(*head)->prev = curr;
	(*head) = curr;
}
