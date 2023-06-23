#include "monty.h"
/**
  *sub_tract - sustration
  *@h_stk: stack head
  *@cou_line: line_number
  *Return: no return
 */
void sub_tract(stack_t **h_stk, unsigned int cou_line)
{
	stack_t *xz;
	int sa, nd;

	xz = *h_stk;
	for (nd = 0; xz != NULL; nd++)
		xz = xz->next;
	if (nd < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", cou_line);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_doub_list(*h_stk);
		exit(EXIT_FAILURE);
	}
	xz = *h_stk;
	sa = xz->next->n - xz->n;
	xz->next->n = sa;
	*h_stk = xz->next;
	free(xz);
}
