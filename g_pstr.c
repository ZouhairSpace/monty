#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new line.
 * @head: pointer to the head of the stack
 * @counter: line number
 * Return: no return
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *current;
	(void)counter;

	current = *head;
	while (current)
	{
		if (current->n > 127 || current->n <= 0)
		{
			break;
		}
		printf("%c", current->n);
		current = current->next;
	}
	printf("\n");
}
