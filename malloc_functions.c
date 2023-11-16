#include "monty.h"

/**
 * _calloc - Concatenates two strings specially
 * @nmemb: Number of elements
 * @size: Type of elements
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;
	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < (nmemb * size); j++)
	{
		*((char *)(p) + j) = 0;
	}
	return (p);
}

/**
 * _realloc - Changes the size and copies the content
 * @ptr: Malloc pointer to reallocate
 * @old_size: Old number of bytes
 * @new_size: New number of bytes
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p = NULL;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		for (j = 0; j < old_size; j++)
			p[j] = *((char *)ptr + j);
		free(ptr);
	}
	else
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		for (j = 0; j < new_size; j++)
			p[j] = *((char *)ptr + j);
		free(ptr);
	}
	return (p);
}

