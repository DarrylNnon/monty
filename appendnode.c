#include "monty.h"
/**
 * monty_add_node - append node head stack
 * @head: param head of stack
 * @n: value of the new node
 * Author: Darryl && Isaac
*/
void monty_add_node(stack_t **head, int n)
{
	stack_t *new_node;
	stack_t *current_head;

	current_head = *head;
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{ 
		printf("Error\n");
		exit(0); 
	}
	if (current_head != NULL)
	{
		current_head->prev = new_node;
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	*head = new_node;
}
