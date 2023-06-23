#include "monty.h"
/**
 * print_st - prints the stack
 * @stk_h: stack head
 * @l_num: no used
 * Return: no return
*/
void print_st(stack_t **stk_h, unsigned int l_num)
{
	stack_t *f;
	(void)l_num;

	f = *stk_h;
	if (f == NULL)
		return;
	while (f)
	{
		printf("%d\n", f->n);
		f = f->next;
	}
}

