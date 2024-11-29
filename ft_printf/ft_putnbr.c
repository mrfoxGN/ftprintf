#include "ft_printf.h"

void	ft_putnbr(int nb,int *len)
{
	if(nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if(nb < 0)
	{
		ft_putchar('-',len);
		nb = -nb;
	}
	if(nb > 9)
	{
		ft_putnbr(nb / 10, len);
	ft_putchar(nb % 10 + '0', len);
	}
}