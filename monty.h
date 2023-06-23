#ifndef _MONTY_H_
#define _MONTY_H_

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;
/**
* struct fleet_s - variables -args, file, line content
* @arg: value
* @monty_file: pointer to monty file
* @line_content: line content
* @zf: flag change stack <-> queue
* Description: carries values through the program
*/
typedef struct fleet_s
{
char *arg;
FILE *monty_file;
char *line_content;
int zf;
} fleet_t;
extern fleet_t fleet;


/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO Holberton project
*/

typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char *clean_line(char *content);

void divide_top_ele(stack_t **st_hd, unsigned int count_l);
int execute(char *line_content, stack_t **stk, unsigned int l_count,
FILE *monty_file);
void mul_st_ele(stack_t **stack_hd, unsigned int l_num);
void insert_nd(stack_t **stk_h, unsigned int l_num);
void free_doub_list(stack_t *h_st);
void print_st_top(stack_t **h_stk, unsigned int l_num);
void com_sec_div(stack_t **h_stk, unsigned int l_num);
void prints_char(stack_t **h_stk, unsigned int l_num);
void print_st(stack_t **stk_h, unsigned int l_num);
void _empty(stack_t **h_stk, unsigned int l_num);
void pri_tp(stack_t **stk_h, unsigned int l_num);
void add_to_tail(stack_t **stk_h, int nw_val);
void rotates_st(stack_t **stk_h,  __attribute__((unused))unsigned int l_num);
void rotates_bm(stack_t **h_stk, __attribute__((unused))unsigned int l_num);
void sta_ck(stack_t **h_stk, unsigned int l_num);
void sub_tract(stack_t **h_stk, unsigned int cou_line);
void add_st_ele(stack_t **h_st, unsigned int l_count);
void nd_insertion(stack_t **h_st, int nw);
void add_tp_ele(stack_t **stk_hd, unsigned int line_cou);
void print_the_top(stack_t **hd_stk, unsigned int cou_line);
void print_top(stack_t **stk_h, unsigned int l_num);

#endif
