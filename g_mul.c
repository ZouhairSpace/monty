#include "monty.h"

/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: pointer to the head of the stack
 * @counter: line number
 * Return: no return
 */
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *current;
	int len = 0, result;

	current = *head;
	while (current)
	{
		current = current->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current = *head;
	result = current->next->n * current->n;
	current->next->n = result;
	*head = current->next;
	free(current);
}
