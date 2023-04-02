/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printer_p.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 09:41:54 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/30 17:52:24 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"


/*
int	ft_printf_printer_p(unsigned long num)
{
	char	*numstr;
	int		numlen;

	numstr = ft_ptoa_lower(num);
	if (!numstr)
	{
		ft_putstr_fd("0x0", 1);
		return (3);
	}
	numlen = ft_strlen(numstr);
	ft_putstr_fd(numstr, 1);
	free(numstr);
	return (numlen);
}
*/

int	ft_printf_printer_p(unsigned long num)
{
	char	*numstr;
	int		numlen;
	int		flag_result;

	numstr = ft_ptoa_lower(num);
	if (!numstr)
		return (-1);
	numlen = ft_strlen(numstr);
	flag_result = write (1, numstr, numlen);
	free(numstr);
	return (flag_result - 1);

}

/*
int	ft_printf_printer_p(unsigned long num)
{
	char	*numstr;
	int		numlen;
	int		flag_result;

	numstr = ft_ptoa_lower(num);
	if (!numstr)
	{
		flag_result = write(1, "0x0", 3);
		if (flag_result == -1)
			return (-1);
		return (3);
	}
	numlen = ft_strlen(numstr);
	write(1, numstr, ft_strlen(numstr));
	flag_result = write(1, numstr, ft_strlen(numstr));
	free(numstr);
	if (flag_result == -1)
		return (-1);
	return (numlen);
}
*/

