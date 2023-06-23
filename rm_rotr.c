#include "monty.h"
/**
  *rotates_bm - rotates the stack to the bottom
  *@h_stk: stack head
  *@l_num: line_number
  *Return: no return
 */
void rotates_bm(stack_t **h_stk, __attribute__((unused))
unsigned int l_num)
{
	stack_t *qp;

	qp = *h_stk;
	if (*h_stk == NULL || (*h_stk)->next == NULL)
	{
		return;
	}
	while (qp->next)
	{
		qp = qp->next;
	}
	qp->next = *h_stk;
	qp->prev->next = NULL;
	qp->prev = NULL;
	(*h_stk)->prev = qp;
	(*h_stk) = qp;
}
