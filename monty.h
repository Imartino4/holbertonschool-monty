#ifndef Monty
#define Monty

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/*Functions*/

void _push(stack_t **, unsigned int);
void _pall(stack_t **, unsigned int);
void _pint(stack_t **, unsigned int);
void _pop(stack_t **, unsigned int);
void _swap(stack_t **, unsigned int);
void _add(stack_t **, unsigned int);
void _nop(stack_t **, unsigned int);
void _sub(stack_t **, unsigned int);
void choose_function(char *, int, stack_t **);

#endif
