#include "monty.h"
fleet_t fleet = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *line_content;
	FILE *monty_file;
	size_t g = 0;
	ssize_t q = 1;
	stack_t *stk_h = NULL;
	unsigned int l_num = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	monty_file = fopen(argv[1], "r");
	fleet.monty_file = monty_file;
	if (!monty_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (q > 0)
	{
		line_content = NULL;
		q = getline(&line_content, &g, monty_file);
		fleet.line_content = line_content;
		l_num++;
		if (q > 0)
		{
			execute(line_content, &stk_h, l_num, monty_file);
		}
		free(line_content);
	}
	free_doub_list(stk_h);
	fclose(monty_file);
return (0);
}
