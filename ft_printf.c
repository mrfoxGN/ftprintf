/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <anguenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:17:29 by anguenda          #+#    #+#             */
/*   Updated: 2024/11/30 16:25:32 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	checks(const char format, int *len, va_list arg)
{
	if (format == 'c')
		ft_putchar((char)va_arg(arg, int), len);
	else if (format == 's')
		ft_putstr(va_arg(arg, char *), len);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(arg, int), len);
	else if (format == 'u')
		ft_unputnbr(va_arg(arg, unsigned int), len);
	else if (format == 'X')
		ft_putnbr_base(va_arg(arg, int), 'X', len);
	else if (format == 'x')
		ft_putnbr_base(va_arg(arg, int), 'x', len);
	else if (format == '%')
		ft_putchar(format, len);
	else if (format == 'p')
		ft_putaddr(va_arg(arg, void *), len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			checks(*format, &len, args);
		}
		else
			ft_putchar(*format, &len);
		format++;
	}
	va_end(args);
	return (len);
}
