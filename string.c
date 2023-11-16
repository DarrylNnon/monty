#include "monty.h"
/**
 * monty_pstr - starting at the top.
 * @head: stack head
 * @counter:line position
 * Authors: Darryl & Isaac
*/
void monty_pstr(stack_t **head, unsigned int counter)
{
	stack_t *my_hd;
	(void)counter;

	my_hd = *head;
	while (my_hd != NULL)
	{
		if (my_hd->n > 127 || my_hd->n <= 0)
			break;
		printf("%c", my_hd->n);
		my_hd = my_hd->next;
	}
	printf("\n");
}
