/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printer_u.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 09:40:14 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/22 21:27:59 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_printer_u(unsigned int num)
{
	char	*numstr;
	int		numlen;
	int		flag_result;

	numstr = ft_uitoa(num);
	if (!numstr)
		return (0);
	numlen = ft_strlen(numstr);
	flag_result = write(1, numstr, numlen);
	free(numstr);
	if (flag_result == -1)
		return (-1);
	return (numlen);
}
