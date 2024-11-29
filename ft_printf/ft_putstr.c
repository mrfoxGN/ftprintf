#include "ft_printf.h"

void ft_putstr(char *str,int *len)
{
    while(*str)
    {
        ft_putchar(*str, len);
        str++;
    }
}