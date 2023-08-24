#include "monty.h"
/**
 * f_add - sum up the 1st 2 elements of slack
 * @head: header
 * @counter: line number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int miles = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		miles++;
	}
	if (miles < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}

