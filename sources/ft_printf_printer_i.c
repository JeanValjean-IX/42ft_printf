/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printer_i.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:18:11 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/22 21:03:25 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_printer_i(int num)
{
	char	*numstr;
	int		numlen;
	int		flag_result;

	numstr = ft_itoa(num);
	if (!numstr)
		return (0);
	numlen = ft_strlen(numstr);
	flag_result = write(1, numstr, ft_strlen(numstr));
	free(numstr);
	if (flag_result == -1)
		return (-1);
	return (numlen);
}
