#include "monty.h"

/**
 * add_dnodeint_end - Adds a node at the end of a doubly linked list
 * @head: Pointer to the first node of the linked list
 * @n: Data to store in the new node
 * Return: A pointer to the newly added node
 */
stack_t *add_dnodeint_end(stack_t **head, const int n)
{
	stack_t *temp, *aux;

	if (head == NULL)
	return (NULL);
	/* Allocate memory for the new node */
	temp = malloc(sizeof(stack_t));
	if (!temp)
	{
	dprintf(2, "Error: malloc failed\n");
	free_vglo();
	exit(EXIT_FAILURE);
	}

	temp->n = n;

	/* Check if the linked list is empty */
	if (*head == NULL)
	{
	temp->next = *head;
	temp->prev = NULL;
	*head = temp;
	return (*head);
}

	/* Traverse to the end of the linked list */
	aux = *head;
	while (aux->next)
	aux = aux->next;

	/* Add the new node at the end */
	temp->next = aux->next;
	temp->prev = aux;
	aux->next = temp;

	return (aux->next);
}

/**
 * add_dnodeint - Adds a node at the beginning of a doubly linked list
 * @head: Pointer to the first node of the linked list
 * @n: Data to store in the new node
 * Return: A pointer to the newly added node
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *temp;

	if (head == NULL)
	return (NULL); 
	/* Allocate memory for the new node */
	temp = malloc(sizeof(stack_t));
	if (!temp)
	{
	dprintf(2, "Error: malloc failed\n");
	free_vglo();
	exit(EXIT_FAILURE);
	}

	temp->n = n;

	/* Check if the linked list is empty */
	if (*head == NULL)
	{
	temp->next = *head;
	temp->prev = NULL;
	*head = temp;
	return (*head);
	}

	/* Add the new node at the beginning */
	(*head)->prev = temp;
	temp->next = (*head);
	temp->prev = NULL;
	*head = temp;

	return (*head);
}

/**
 * free_dlistint - Frees the memory allocated for a doubly linked list
 * @head: Pointer to the first node of the linked list
 * Return: No return value
 */
void free_dlistint(stack_t *head)
{
	stack_t *tmp;

	while ((tmp = head) != NULL)
	{
	head = head->next;
	free(tmp);
	}
}
