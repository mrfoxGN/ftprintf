#ifndef FT_PRINTF_H 
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

void ft_putchar(char c,int *len);
void ft_putstr(char *str,int *len);
int	ft_printf(const char *format, ...);
void	ft_putnbr(int nb,int *len);




#endif