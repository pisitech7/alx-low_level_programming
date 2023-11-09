#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Select the correct function to perform,
 *               the operation asked by the user.
 *@s: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 * to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
int i = 0;
{
op_t[] = {
{"*", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};
while (op[i].op != NULL && *(ops[i].op) != *s)
i++;
return (ops[i].f);
}
