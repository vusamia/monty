#include "monty.h"
/**
 * print_the_top - prints the top
 * @hd_stk: stack head
 * @cou_line: line_number
 * Return: no return
*/
void print_the_top(stack_t **hd_stk, unsigned int cou_line)
{
	stack_t *head;

	if (*hd_stk == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", cou_line);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_doub_list(*hd_stk);
		exit(EXIT_FAILURE);
	}
	head = *hd_stk;
	*hd_stk = head->next;
	free(head);
}
