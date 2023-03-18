/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printer_p.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:38:16 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/18 22:39:05 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_printer_p(unsigned long num)
{
	char	*numstr;
	int		numlen;

	numstr = ft_ptoua(num);
	if (!numstr)
		return (0);
	numlen = ft_strlen(numstr);
	ft_putstr_fd(numstr, 1);
	free(numstr);
	return (numlen);
}