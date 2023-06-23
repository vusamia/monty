#include "monty.h"
/**
 * com_sec_div - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @h_stk: stack head
 * @l_num: line_number
 * Return: no return
*/
void com_sec_div(stack_t **h_stk, unsigned int l_num)
{
	stack_t *al;
	int l = 0, xy;

	al = *h_stk;
	while (al)
	{
		al = al->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", l_num);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_doub_list(*h_stk);
		exit(EXIT_FAILURE);
	}
	al = *h_stk;
	if (al->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", l_num);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_doub_list(*h_stk);
		exit(EXIT_FAILURE);
	}
	xy = al->next->n % al->n;
	al->next->n = xy;
	*h_stk = al->next;
	free(al);
}
