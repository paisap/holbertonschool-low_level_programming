int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;	

    for ( i = 0; i < 6; i++)
    {
	    if (*s == ops[i]->op)
	    {
