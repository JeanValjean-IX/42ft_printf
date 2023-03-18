/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printer_d.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:54:43 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/18 20:03:21 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_printer_d(int num)
{
	char	*numstr;
	int		numlen;

	numstr = ft_itoa(num);
	if (!numstr)
		return (0);
	numlen = ft_strlen(numstr);
	ft_putstr_fd(numstr, 1);
	free(numstr);
	return (numlen);
}
