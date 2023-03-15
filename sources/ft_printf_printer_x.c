/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printer_x.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:11:05 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/15 23:18:49 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_printer_x(int num, char c)
{
	int	len;
	char *str;

	if (c == 'x')
		str = "0123456789abcdef";
	else
		str = "0123456789ABCDEF";
	len = ft_printf_number(num, str, 0);
	return (len);
}