#include "monty.h"
/**
 * mul_st_ele - multiplies the top two elements of the stack.
 * @stack_hd: stack head
 * @l_num: line_number
 * Return: no return
*/
void mul_st_ele(stack_t **stack_hd, unsigned int l_num)
{
	stack_t *x;
	int ln = 0, zi;

	x = *stack_hd;
	while (x)
	{
		x = x->next;
		ln++;
	}
	if (ln < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", l_num);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_doub_list(*stack_hd);
		exit(EXIT_FAILURE);
	}
	x = *stack_hd;
	zi = x->next->n * x->n;
	x->next->n = zi;
	*stack_hd = x->next;
	free(x);
}
