 #include "monty.h"
/**
 * f_pstr - outputs string beginning with the top of the stack,
 * lastly by a new
 * @head: head
 * @counter: line number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}

