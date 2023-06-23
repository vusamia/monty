#include "monty.h"
/**
* execute - executes the opcode
* @stk: head linked list - stack
* @l_count: line_counter
* @monty_file: poiner to monty file
* @line_content: line content
* Return: no return
*/
int execute(char *line_content, stack_t **stk, unsigned int l_count,
		FILE *monty_file)
{
	instruction_t opst[] = {
				{"push", insert_nd}, {"pall", print_st}, {"pint", print_top},
				{"pop", print_the_top},
				{"swap", add_tp_ele},
				{"add", add_st_ele},
				{"nop", _empty},
				{"sub", sub_tract},
				{"div", divide_top_ele},
				{"mul", mul_st_ele},
				{"mod", com_sec_div},
				{"pchar", prints_char},
				{"pstr", print_st_top},
				{"rotl", rotates_st},
				{"rotr", rotates_bm},
				{"queue", pri_tp},
				{"stack", sta_ck},
				{NULL, NULL}
				};
	unsigned int a = 0;
	char *po;

	po = strtok(line_content, " \n\t");
	if (po && po[0] == '#')
		return (0);
	fleet.arg = strtok(NULL, " \n\t");
	while (opst[a].opcode && po)
	{
		if (strcmp(po, opst[a].opcode) == 0)
		{	opst[a].f(stk, l_count);
			return (0);
		}
		a++;
	}
	if (po && opst[a].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", l_count, po);
		fclose(monty_file);
		free(line_content);
		free_doub_list(*stk);
		exit(EXIT_FAILURE); }
	return (1);
}
