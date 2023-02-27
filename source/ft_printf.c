/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:46:10 by blopez-f          #+#    #+#             */
/*   Updated: 2023/02/27 22:20:04 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list arg;
	
	if (!format)
		return(-1);
	va_start(arg, format);
	ft_printf_parse(format, arg);
	va_end(arg);
	return(1);	
}
