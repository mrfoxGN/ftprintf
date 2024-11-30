/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <anguenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:16:53 by anguenda          #+#    #+#             */
/*   Updated: 2024/11/30 15:43:02 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
int		ft_printf(const char *format, ...);
void	ft_unputnbr(unsigned int n, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_putaddr(void *addr, int *len);
void	ft_putaddr_hex(unsigned long int nbr, char Xx, int *len);

void	ft_putnbr_base(unsigned int nbr, char Xx, int *len);

#endif