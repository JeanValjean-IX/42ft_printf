/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 22:09:04 by blopez-f          #+#    #+#             */
/*   Updated: 2023/02/27 22:23:25 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_printf_nbr_base(int num, char *digits)
{
	int	aux1;
	int	aux2;
	int base;

	aux2 = 0;
	base = ft_strlen(digits);
	if (num == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
	}
	else if (num < 0)
	{
		ft_putchar_fd('-', 1);
		num = -num;
		ft_putnbr_fd(num, 1);
	}
	else if (num > 9)
	{
		aux1 = num / 10;
		aux2 = digits[(num % base)];
		ft_putnbr_fd(aux1, 1);
		ft_putchar_fd(aux2, 1);
	}
	else
		ft_putchar_fd(digits[num], 1);
}

void	ft_printf_nbr(int num, char type)
{
	if (type == 'i')
		ft_printf_nbr_base(num,"0123456789");
	else if (type == 'd')
		ft_printf_nbr_base(num,"0123456789");
	else if (type == 'u')
	{
		if (num < 0)
			num = -num;
		ft_printf_nbr_base(num,"0123456789");
	}
	else if (type == 'x')
		ft_printf_nbr_base(num, "0123456789abcdef");
	else if (type == 'X')
		ft_printf_nbr_base(num, "0123456789ABCDEF");
}
