#include "monty.h"
/**
 * prints_char - prints the char at the top of the stack,
 * followed by a new line
 * @h_stk: stack head
 * @l_num: line_number
 * Return: no return
*/
void prints_char(stack_t **h_stk, unsigned int l_num)
{
	stack_t *hd;

	hd = *h_stk;
	if (!hd)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", l_num);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_doub_list(*h_stk);
		exit(EXIT_FAILURE);
	}
	if (hd->n > 127 || hd->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", l_num);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_doub_list(*h_stk);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hd->n);
}
