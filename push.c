#include "monty.h"
/**
 * monty_push - pushes node to stack
 * @head: stack head
 * @counter:line position
 * Author: Darryl & Isaac
*/
void monty_push(stack_t **head, unsigned int counter)
{
	int n, count = 0, f = 0;

	if (stub.myarg)
	{
		if (stub.myarg[0] == '-')
			count++;
		for (; stub.myarg[count] != '\0'; count++)
		{
			if (stub.myarg[count] > 57 || stub.myarg[count] < 48)
				f = 1;
		}
		if (f == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(stub.p_file);
			free(stub.cont);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(stub.p_file);
		free(stub.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(stub.myarg);
	if (stub.fin == 0)
		monty_addnode(head, n);
	else
		monty_addqueue(head, n);
}
