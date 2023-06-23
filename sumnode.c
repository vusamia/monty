#include "monty.h"
/**
 * nd_insertion - add node to the head stack
 * @h_st: head of the stack
 * @nw: new_value
 * Return: no return
*/
void nd_insertion(stack_t **h_st, int nw)
{

	stack_t *nw_nd, *xy;

	xy = *h_st;
	nw_nd = malloc(sizeof(stack_t));
	if (nw_nd == NULL)
	{ printf("Error\n");
		exit(0); }
	if (xy)
		xy->prev = nw_nd;
	nw_nd->n = nw;
	nw_nd->next = *h_st;
	nw_nd->prev = NULL;
	*h_st = nw_nd;
}
