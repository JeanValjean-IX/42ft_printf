/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:42:08 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/15 23:20:42 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_printf_printer(va_list arg, t_properties *properties)
{
	int len;
	
	len = 0;
	if (properties->type == '%')
		len += ft_printf_printer_c('%');
	else if (properties->type == 'c')
		len += ft_printf_printer_c(va_arg(arg, int));
	else if (properties->type == 's')
		len += ft_printf_printer_s(va_arg(arg, char*));
	else if (properties->type == 'i')
		len += ft_printf_printer_i(va_arg(arg, int));
	else if (properties->type == 'x' || properties->type == 'X')
		len += ft_printf_printer_x(va_arg(arg, int), properties->type);
	return (len);
}