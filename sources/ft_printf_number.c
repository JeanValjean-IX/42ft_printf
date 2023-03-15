/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 22:24:41 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/15 23:33:41 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_number(int num, char *digits, int len)
{
	int	aux1;
	int	aux2;
	int base;

	len++;
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
		len = ft_printf_number(num, digits, len);
	}
	else if (num > base-1)
	{
		aux1 = num / base;
		aux2 = digits[(num % base)];
		len = ft_printf_number(aux1, digits, len);
		ft_putchar_fd(aux2, 1);
	}
	else
		ft_putchar_fd(digits[num], 1);
	return (len);
}