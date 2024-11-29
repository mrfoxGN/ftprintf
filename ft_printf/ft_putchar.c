#include "ft_printf.h"

void ft_putchar(char c, int *print)
{
    write(1 ,&c ,1);
    (*print)++;
}