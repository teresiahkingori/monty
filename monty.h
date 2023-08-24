#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

extern char *value;

/**
 ** struct stack_s - doubly linked list representation of a stack (or queue)
 ** @n: integer
 ** @prev: points to the previous element of the stack (or queue)
 ** @next: points to the next element of the stack (or queue)
 **
 ** Description: doubly linked list node structure
 ** for stack, queues, LIFO, FIFO
 **/
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;
/**
** struct instruction_s - opcode and its function
** @opcode: the opcode
** @f: function to handle the opcode
**
** Description: opcode and its function
** for stack, queues, LIFO, FIFO
**/
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void exe(char *line, stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number, char *value);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
int _isdigit(char *value);
void free_stack(stack_t *stack);
void _get(char *line, char *opcode, stack_t **stack, unsigned int line_number);
void err_push(char *opcode, unsigned int line_number);
void err_pint(char *opcode, unsigned int line_number);
void err_pop(char *opcode, unsigned int line_number);
void err_add(char *opcode, unsigned int line_number);
void err_swap(char *opcode, unsigned int line_number);
void err_dir(char *opcode, unsigned int line_number);
void push_wrapper(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */
