#include "monty.h"
/**
  *rotates_st - rotates the stack to the top
  *@stk_h: stack head
  *@l_num: line_number
  *Return: no return
 */
void rotates_st(stack_t **stk_h,  __attribute__((unused))
unsigned int l_num)
{
	stack_t *cp = *stk_h, *xy;

	if (*stk_h == NULL || (*stk_h)->next == NULL)
	{
		return;
	}
	xy = (*stk_h)->next;
	xy->prev = NULL;
	while (cp->next != NULL)
	{
		cp = cp->next;
	}
	cp->next = *stk_h;
	(*stk_h)->next = NULL;
	(*stk_h)->prev = cp;
	(*stk_h) = xy;
}
