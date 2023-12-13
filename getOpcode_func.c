#include "monty.h"
#include "linkedlists.h"

/**
 * getOpcode_func - selects the right Opcode function
 * @parsed: line from the bytecode file passed to main
 *
 * Return: pointer to the selected function, or NULL on failure
 */

void (*getOpcode_func(char **parsed))(stack_t **, unsigned int)
{
	instruction_t funcs_arr[] = {
		{"push", push_handler},
		{"pall", pall_handler},
		{"pint", pint_handler},
		{"pop", pop_handler},
		{"swap", swap_handler},
		{"add", add_handler},
		{"nop", nop_handler},
		{"sub", sub_handler},
		{"div", div_handler},
		{NULL, NULL}
	};

	int total_OpCodes = 9, i;

	for (i = 0; i < total_OpCodes; i++)
	{
		if (strcmp(funcs_arr[i].opcode, parsed[0]) == 0)
		{
			return (funcs_arr[i].f);
		}
	}

	return (NULL);
}
