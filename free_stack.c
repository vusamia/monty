#include "monty.h"
/**
* free_doub_list - frees a doubly linked list
* @h_st: head of the stack
*/
void free_doub_list(stack_t *h_st)
{
	stack_t *xv;

	xv = h_st;
	while (h_st)
	{
		xv = h_st->next;
		free(h_st);
		h_st = xv;
	}
}
