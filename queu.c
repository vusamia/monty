#include "monty.h"
/**
 * pri_tp - prints the top
 * @stk_h: stack head
 * @l_num: line_number
 * Return: no return
*/
void pri_tp(stack_t **stk_h, unsigned int l_num)
{
	(void)stk_h;
	(void)l_num;
	fleet.zf = 1;
}

/**
 * add_to_tail - add node to the tail stack
 * @nw_val: new_value
 * @stk_h: head of the stack
 * Return: no return
*/
void add_to_tail(stack_t **stk_h, int nw_val)
{
	stack_t *nw_nd, *xy;

	xy = *stk_h;
	nw_nd = malloc(sizeof(stack_t));
	if (nw_nd == NULL)
	{
		printf("Error\n");
	}
	nw_nd->n = nw_val;
	nw_nd->next = NULL;
	if (xy)
	{
		while (xy->next)
			xy = xy->next;
	}
	if (!xy)
	{
		*stk_h = nw_nd;
		nw_nd->prev = NULL;
	}
	else
	{
		xy->next = nw_nd;
		nw_nd->prev = xy;
	}
}
