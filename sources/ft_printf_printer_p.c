/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printer_p.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 09:41:54 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/24 22:21:49 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_printer_p(unsigned long num)
{
	char	*numstr;
	int		numlen;
	int		flag_result;

	numstr = ft_ptoa_lower(num);
	if (numstr == 0)
		return (-1);
	numlen = ft_strlen(numstr);
	flag_result = write (1, numstr, numlen);
	free(numstr);
	return (flag_result);
	/*
	if (flag_result == -1)
		return (-1);
	return (numlen);
	*/
}
