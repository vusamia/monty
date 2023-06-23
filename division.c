#include "monty.h"
/**
 * divide_top_ele - divides the top two elements of the stack.
 * @st_hd: stack head
 * @count_l: line_number
 * Return: no return
*/
void divide_top_ele(stack_t **st_hd, unsigned int count_l)
{
	stack_t *ai;
	int len = 0, ax;

	ai = *st_hd;
	while (ai)
	{
		ai = ai->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", count_l);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_doub_list(*st_hd);
		exit(EXIT_FAILURE);
	}
	ai = *st_hd;
	if (ai->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count_l);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_doub_list(*st_hd);
		exit(EXIT_FAILURE);
	}
	ax = ai->next->n / ai->n;
	ai->next->n = ax;
	*st_hd = ai->next;
	free(ai);
}
