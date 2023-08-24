#include "monty.h"
/**
 * f_push - sum up the node to the stack
 * @head: header
 * @counter: line number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int counter)
{
	int miles, sk = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			sk++;
		for (; bus.arg[sk] != '\0'; sk++)
		{
			if (bus.arg[sk] > 57 || bus.arg[sk] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\miles", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\miles", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	miles = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, miles);
	else
		addqueue(head, n);
}

