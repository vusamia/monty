#include "monty.h"
/**
 * add_st_ele - adds the top two elements of the stack.
 * @h_st: stack head
 * @l_count: line_number
 * Return: no return
*/
void add_st_ele(stack_t **h_st, unsigned int l_count)
{
	stack_t *az;
	int len = 0, ax;

	az = *h_st;
	while (az)
	{
		az = az->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", l_count);
		fclose(fleet.monty_file);
		free(fleet.line_content);
		free_doub_list(*h_st);
		exit(EXIT_FAILURE);
	}
	az = *h_st;
	ax = az->n + az->next->n;
	az->next->n = ax;
	*h_st = az->next;
	free(az);
}
