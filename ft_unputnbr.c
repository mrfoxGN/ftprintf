/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <anguenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:33:55 by anguenda          #+#    #+#             */
/*   Updated: 2024/11/30 15:41:44 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void	ft_unputnbr(unsigned int n, int *len)
{
	if (n < 10)
		ft_putchar(n + '0', len);
	else
	{
		ft_putnbr(n / 10, len);
		ft_putnbr(n % 10, len);
	}
}