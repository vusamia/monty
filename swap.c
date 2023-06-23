#include "monty.h"
/**
 * add_tp_ele - adds the top two elements of the stack.
 * @stk_hd: stack head
 * @line_cou: line_number
 * Return: no return
*/
void add_tp_ele(stack_t **stk_hd, unsigned int line_cou)
{
	stack_t *hd;
	int l = 0, xy;

	hd = *stk_hd;
	while (hd)
	{
		hd = hd->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_cou);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_doub_list(*stk_hd);
		exit(EXIT_FAILURE);
	}
	hd = *stk_hd;
	xy = hd->n;
	hd->n = hd->next->n;
	hd->next->n = xy;
}
