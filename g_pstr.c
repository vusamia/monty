#include "monty.h"
/**
 * print_st_top - prints the string starting at the top of the stack,
 * followed by a new
 * @h_stk: stack head
 * @l_num: line_number
 * Return: no return
*/
void print_st_top(stack_t **h_stk, unsigned int l_num)
{
	stack_t *hd;
	(void)l_num;

	hd = *h_stk;
	while (hd)
	{
		if (hd->n > 127 || hd->n <= 0)
		{
			break;
		}
		printf("%c", hd->n);
		hd = hd->next;
	}
	printf("\n");
}
