#include "monty.h"

/**
 * pall - prints all the values on the stack
 * @s: stack given by main
 * @cnt: amount of lines
 */

void pall(stack_t **s, unsigned int cnt)
{
	stack_t *current = *s;

	(void)cnt; // Unused parameter

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
