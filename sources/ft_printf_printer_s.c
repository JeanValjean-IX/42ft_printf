/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printer_s.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:19:43 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/22 21:01:59 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_printer_s(char *str)
{
	int flag_result;
	int len;

	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	flag_result = write (1, str, len);
	if (flag_result == -1)
		return (-1);
	return (len);
}
