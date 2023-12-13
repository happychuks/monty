#include "monty.h"
#include "linkedlists.h"

/**
 * mul_handler - handles the mul instruction
 * @stack: double pointer to the stack to push to
 * @line_number: number of the line in the file
 */
void mul_handler(stack_t **stack, unsigned int line_number)
{
	int mul = 0;
	stack_t *node = NULL;
	stack_t *node_0 = get_dnodeint_at_index(*stack, 0);
	stack_t *node_1 = get_dnodeint_at_index(*stack, 1);

	if (dlistint_len(*stack) < 2)
	{
		dprintf(STDERR_FILENO, MUL_FAIL, line_number);
		free_all(1);
		exit(EXIT_FAILURE);
	}

	mul = node_1->n * node_0->n;
	delete_dnodeint_at_index(stack, 0);
	delete_dnodeint_at_index(stack, 0);
	node = add_dnodeint(stack, mul);
	if (!node)
	{
		dprintf(STDERR_FILENO, MALLOC_FAIL);
		free_all(1);
		exit(EXIT_FAILURE);
	}
}


