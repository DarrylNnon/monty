#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: pointer to the head of the doubly linked list
* Authors: Darryl && Isaac
*/
void free_stack(stack_t *head)
{
	stack_t *result = head;

	while (head != NULL)
	{
		result = head->next;
		free(head);
		head = result;
	}
}
