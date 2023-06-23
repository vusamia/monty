#include "monty.h"
/**
 * print_top - prints the top
 * @stk_h: stack head
 * @l_num: line_number
 * Return: no return
*/
void print_top(stack_t **stk_h, unsigned int l_num)
{
	if (*stk_h == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", l_num);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_doub_list(*stk_h);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stk_h)->n);
}
