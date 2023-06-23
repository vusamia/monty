#include "monty.h"
/**
 * insert_nd - add node to the stack
 * @stk_h: stack head
 * @l_num: line_number
 * Return: no return
*/
void insert_nd(stack_t **stk_h, unsigned int l_num)
{
	int pq, xy = 0, uv = 0;

	if (fleet.arg)
	{
		if (fleet.arg[0] == '-')
			xy++;
		for (; fleet.arg[xy] != '\0'; xy++)
		{
			if (fleet.arg[xy] > 57 || fleet.arg[xy] < 48)
				uv = 1; }
		if (uv == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", l_num);
			fclose(fleet.monty_file);
			free(fleet.line_content);
			free_doub_list(*stk_h);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", l_num);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_doub_list(*stk_h);
		exit(EXIT_FAILURE); }
	pq = atoi(fleet.arg);
	if (fleet.zf == 0)
		nd_insertion(stk_h, pq);
	else
		add_to_tail(stk_h, pq);
}
